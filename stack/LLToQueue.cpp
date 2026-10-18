#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data= val;
        next=NULL;
    }
};
class LinkedListQueue {
public:
    Node* head;
    int size;
    LinkedListQueue() {
        head= NULL;
        size=0;
    }
    
    void push(int x) {
        Node* newNode= new Node(x);
        if(head==NULL) {
            size++;
            head= newNode;
            return ;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp= temp->next;
        }
        temp->next= newNode;
        size++;
    }
    
    int pop() {
        if(head==NULL) return -1;
        int del = head->data;
        Node* delNode = head;
        head= head->next;
        delete(delNode);
        size--;
        return del;
    }
    
    int peek() {
        if(head==NULL) return -1;
        return head->data;
    }
    
    bool isEmpty() {
        if(size==0) return true;
        return false;
    }
};