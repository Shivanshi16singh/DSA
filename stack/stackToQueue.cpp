#include <bits/stdc++.h>
using namespace std;

static const int size= 100;
int front = -1;
int rear = -1;
int currSize = 0;
int q[100];

void push(int x){
    if(currSize==100){
        return ;
    }else if(currSize==0){
        front = 0;
        rear = 0;
    }else{
        rear = (rear+1)%100;
    }
    q[rear] = x;
    currSize++;

    for(int i=0; i<currSize-1; i++){
        rear = (rear+1)% 100;
        q[rear] = q[front]; 
        front = (front+1)% 100;
    }
}

int pop(){
    if(currSize==0) return -1;
    int del= q[front];
    front = (front+1)%100;
    currSize--;
    return del;
}

int top(){
    if(currSize==0) return -1;
    return q[front];
}

bool isEmpty(){
    if(currSize==0) return true;
    return false;
}