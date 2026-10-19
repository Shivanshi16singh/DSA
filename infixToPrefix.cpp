#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string infixToPrefix(const string& str) {
        stack <char> st;
        string ans="";
        string s= reverse(str);
        for(int i=0; i<s.size(); i++){
             if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i] <='z') || (s[i]>='0' && s[i]<='9')){
                ans+= s[i];
            }else if(s[i]=='('){
                st.push(s[i]);
            }else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    ans+= st.top();
                    st.pop();
                }
                st.pop();
            }else {
                if(st.empty()){
                    st.push(s[i]);
                }
                else if(p(s[i])>=p(st.top())){
                    st.push(s[i]);
                }else{
                    while(!st.empty() && p(s[i])<p(st.top())){
                        ans+= st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            ans+= st.top();
            st.pop();
        }
        string answ= reverse(ans);
        return answ;
    }
    int p(char ch){
        if(ch=='^') return 3;
        else if(ch=='*' || ch=='/') return 2;
        else if(ch=='+' || ch=='-') return 1;
        return -1;
    }
    string reverse(string s){
        int left = 0;
        int right = s.size()-1;
        while(left<=right){
            char temp= s[left];
            s[left]= s[right];
            s[right]= temp;
            left++;
            right--;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                s[i]=')';
            }else if(s[i]==')'){
                s[i]='(';
            }
        }
        return s;
    }
};