#include <bits/stdc++.h>
using namespace std;

int top=-1;
int st[100];

void push(int val){
    if(top==100-1){
        return ;
    }
    top++;
    st[top]= val;
}

int pop(){
    if(top==-1){
        return -1;
    }
    int popElem= st[top];
    top--;
    return popElem;
}

int topStack(){
    if(top==-1){
        return -1;
    }
    return st[top];
}

bool isEmpty(){
    if(top==-1){
        return true;
    }
    return false;
}