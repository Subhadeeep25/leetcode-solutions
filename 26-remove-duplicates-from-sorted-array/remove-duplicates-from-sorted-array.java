class Solution {
    public int removeDuplicates(int[] nums) {
        int j=0,n;
        for(int i=1;i<nums.length;i++){
            n=nums[i];
            if(nums[i]==nums[j])continue;
            else if(nums[i]>nums[j]){
                int k=nums[i];
                nums[i]=nums[j];
                nums[j+1]=k;
                j++;
            }
        }
        return j+1;
    }
}