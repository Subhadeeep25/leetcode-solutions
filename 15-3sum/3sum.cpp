class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>triplets;
        vector<vector<int>>ans;
         for(int i=0;i<nums.size()-2;i++){
             if(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int target=nums[i]+nums[j]+nums[k];
                if(target<0) j++;
                else if(target>0)k--;
                else{
                    triplets={nums[i],nums[j],nums[k]};
                    ans.push_back(triplets);
                    j++;
                    while(nums[j-1]==nums[j] &&j<k)j++;
                }
            }            
         } 
        return ans;
    }
};