class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,mx=INT_MIN;
        for(int i=0;i<k && i<nums.size();i++){
            sum+=nums[i];
        }
        mx=max(mx,sum/k);
        for(int i=0;k+i<nums.size();i++){
            sum+=nums[k+i];
            sum-=nums[i];
            mx=max(mx,sum/k);
            cout<<mx<<" ";
        }
        return mx;
    }
};