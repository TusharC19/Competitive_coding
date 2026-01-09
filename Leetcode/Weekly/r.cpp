# include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int solve(vector<int>& nums1, vector<int>& nums2,int i,int j,vector<vector<int>>&dp){
        int n=nums1.size(),m=nums2.size();
        if(i==n||j==m) return -1e9;

        // Step3 : if value already exists, solve kr rkha hai toh direct return
        if(dp[i][j]!=-1e9) return dp[i][j];

        int val = nums1[i]*nums2[j];
        int take_i_j = (nums1[i]*nums2[j]) + solve(nums1,nums2,i+1,j+1,dp);
        int take_i = solve(nums1,nums2,i,j+1,dp);
        int take_j = solve(nums1,nums2,i+1,j,dp);

        // step2: put in dp and return in from dp
        dp[i][j] =  max({val,take_i_j,take_i,take_j});
        return dp[i][j];

    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        // Step1: initialize dp array
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1e9));
        
        return solve(nums1,nums2,0,0,dp);
    }
};

int main(){
    
 return 0;
}