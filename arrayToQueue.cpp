#include <bits/stdc++.h>
using namespace std;

int q[100];
int front=-1;
int rear=-1;
int currSize=0;

void push(int val){
    if(currSize==100){
        return ;
    }else{
        if(currSize==0){
            front=0;
            rear=0;
        }else{
            rear= (rear+1)%100;
        }
        currSize++;
        q[rear]= val;
    }
}

int pop(){
    if(currSize==0){
        return -1;
    }else{
        int delElement = q[front];
        if(currSize==1){
            front=-1;
            rear=-1;
        }else{
            front = (front+1)% 100;
        }
        currSize--;
        return delElement;
    }
}

int peek(){
    if(currSize==0){
        return -1;
    }
    return q[front];
}

bool isEmpty(){
    if(currSize==0) return true;
    return false;
}