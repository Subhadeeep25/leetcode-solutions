class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size()/4;
        for(int i=0;i<arr.size();i++){
            if(arr[i+n]==arr[i])return arr[i];
        }
        return -1;
    }
};