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
class LinkedListStack {
public:
        Node* head;
        int size;
    LinkedListStack() {
        head = NULL;
        size=0;
    }
    
    void push(int x) {
        Node* newNode =  new Node(x);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    int pop() {
        int delNode= head->data;
        Node* del= head;
        head= head->next;
        delete(del);
        size--;
        return delNode;
    }
    
    int top() {
        return head->data;
    }
    
    bool isEmpty() {
        if(size==0) return true;
        return false;
    }
};