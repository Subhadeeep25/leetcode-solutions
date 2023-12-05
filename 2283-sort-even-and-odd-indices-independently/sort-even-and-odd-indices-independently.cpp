class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even,odd,ans;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int e=0,o=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans.push_back(even[e]);
                e++;
            }else{
                ans.push_back(odd[odd.size()-1-o]);
                o++;
            }
        }
        return ans;

    }
};