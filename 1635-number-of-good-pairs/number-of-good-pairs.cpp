class Solution {
public:
    int fact(int n){
        if (n<=1)return 1;
        return n+fact(n-1);
    } 
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int ans=0;
        for(auto i:mp){
            if(i.second>1){
                ans+=fact(i.second-1);
            }
            
        }
        return ans;
    }
};