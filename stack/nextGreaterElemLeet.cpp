#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector <int> ans(nums.size());
        for(int i=0; i<nums.size(); i++){
            int temp=-1;
            for(int j= i+1; j<nums.size(); j++){
                if(nums[i]<nums[j]){
                    temp= nums[j];
                    break;
                }
            }
            if(temp==-1){
                for(int k=0; k<i; k++){
                    if(nums[i]<nums[k]){
                        temp= nums[k];
                        break;
                    }
                }
            }
            ans[i]= temp;
        }
        return ans;


        
        stack <int> st;
        for(int i=2*nums.size()-1; i>=0; i--){
            int idx= i% (nums.size());
            while(!st.empty() && nums[idx]>=st.top()){
                st.pop();            
            }
            if(st.empty()) ans[idx]=-1;
            else ans[idx]= st.top();
            st.push(nums[idx]);
        }
        return ans;
    }
};