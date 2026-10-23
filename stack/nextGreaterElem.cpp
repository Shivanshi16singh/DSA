#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
       vector <int> ans(arr.size());
    //    for(int i=0; i<arr.size(); i++){
    //     int elem = -1;
    //     for(int j=i+1; j<arr.size(); j++){
    //         if(arr[i]<arr[j]){
    //             elem = arr[j];
    //             break;
    //         }
    //     }
    //     ans[i]= elem;
    //    }
    //    return ans;
    // }
    stack <int> st;
    for(int i= arr.size()-1; i>=0; i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()) ans[i]=-1;
            else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
    }
};
