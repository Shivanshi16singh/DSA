#include <bits/stdc++.h>
using namespace std;

struct Node{
    int coeff;
    int pow;
    Node* next;
};

void sum(vector <int> arr){
    int oddSum=0;
    int eveSum=0;
    for(int i=0; i< arr.size(); i++){
        if(arr[i]%2==0){
            eveSum+= arr[i];
        }else{
            oddSum+=arr[i];
        }
    }
    cout<< "oddSum" <<oddSum;
    cout<<"eveSum"<<eveSum;
}

Node* createNode(int pow, int coeff){
    Node* newNode= new Node;
    newNode->coeff= coeff;
    newNode->pow= pow;
    newNode->next= NULL;
    return newNode;
}

Node* sumLL(Node* head1, Node* head2){
    Node* temp1= head1;
    Node* temp2= head2;
    Node* sum;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1==NULL && temp2==NULL) return NULL;
        sum= new Node;
        if(temp1->coeff == temp2->coeff){
            sum->coeff= temp1->coeff + temp2->coeff;
            sum->pow = temp1->pow ;
            sum= sum->next;
            temp1= temp1->next;
            temp2= temp2->next;
        }
        else if(temp1->coeff > temp2->coeff){
            temp1= temp1->next;
        }else{
            temp2= temp2->next;
        }
    }
    return sum;
}