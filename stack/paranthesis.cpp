#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
       int n = str.length();
       stack <int> s;
       int top=-1;
       for(int i=0; i<n; i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            top++;
            s.push(str[i]);
        }else if(str[i]==')' && s.top()=='('){
            s.pop();
            top--;
        }
        else if(str[i]=='}' && s.top()=='{'){
            s.pop();
            top--;
        }
        else if(str[i]==']' && s.top()=='['){
            s.pop();
            top--;
        }
       }
       if(top==-1){
        return true;
       }
       return false;
    }
};
