#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string postToInfix(string postExp) {
        string s= postExp;
        stack <string> st;
        for(int i=0; i<s.size(); i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i] <='z') || (s[i]>='0' && s[i]<='9')){
                st.push(string (1,s[i]));
            }else{
                string t1= st.top();
                st.pop();
                string t2= st.top();
                st.pop();
                string ans= "(" + t2 + s[i] + t1 + ")";
                st.push(ans);
            }
        }
        return st.top();
    }
};
