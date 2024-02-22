class Solution {
public:
    int rob(vector<int>& nums) {
        int dp[nums.size()];
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i<=1)dp[i]=nums[i];
            else 
            if(i-3>=0)dp[i]=nums[i]+max(dp[i-2],dp[i-3]);
            else dp[i]=nums[i]+dp[i-2];
        }
        for(int i:dp)cout<<i<<" ";
        return n>1?max(dp[n-1],dp[n-2]):dp[n-1];
    }
};