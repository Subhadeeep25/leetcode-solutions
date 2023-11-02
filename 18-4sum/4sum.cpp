class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int left=j+1,right=n-1;
                long long sum1=nums[i]+nums[j];
                while(left<right){
                    long long sum2=nums[left]+nums[right];
                    if(sum1+sum2<target){
                        left++;
                    }
                    else if(sum1+sum2>target){
                        right--;
                    }
                    else{
                        st.insert({nums[i],nums[j],nums[left],nums[right]});  
                        left++;
                        right--;
                    }
                }
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};