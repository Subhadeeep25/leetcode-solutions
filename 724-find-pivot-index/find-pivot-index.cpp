class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(auto i:nums){
            sum+=i;
        }
        int leftsum=0,rightsum=sum;
        for(int i=0;i<nums.size();i++){
            rightsum-=nums[i];
            if(i>=1){
               leftsum+=nums[i-1]; 
            }
            if(leftsum==rightsum)return i;
        }
        return -1;
    }
};