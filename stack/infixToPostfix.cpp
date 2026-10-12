#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <int> st;
    string s= "a+b*(c^d-e)";
    string ans="";
    int n= s.size();
    for(int i=0; i<n ; i++){
        if((s[i]>='A' && s[i]<='Z') ||(s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')  ){
            ans+= s[i];
        }else if(s[i]=='(' || s[i]=='['|| s[i]=='{' ){
            st.push(s[i]);
        }else if(s[i]==')' || s[i]==']'|| s[i]=='}' ){
            while(st.top()!='(' || st.top()!='['|| st.top()!='{' ){
                ans+= st.top();
                st.pop();
            }
        }
    }
    return 0;
}