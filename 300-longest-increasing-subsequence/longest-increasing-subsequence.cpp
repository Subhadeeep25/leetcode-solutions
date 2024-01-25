class Solution {
public:
int len=0;
    int check(vector<int>nums){
        int ans=1;
        int lis[nums.size()];
        for(int i=0;i<nums.size();i++){
            lis[i]=1;
        }
        for(int i=nums.size()-1;i>=0;i--){
          for(int j=i+1;j<nums.size();j++){
              if(nums[i]<nums[j]){
                  lis[i]=max(lis[i],1+lis[j]);
              }
            ans=max(ans,lis[i]);
          }  
        }
        return ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        return check(nums);
    }
};