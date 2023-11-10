class Solution {
    public int mySqrt(int x) {
        if(x==0)return x;
        int left=1,right=x,mid=-1;
        while(left<=right){
            mid=(left+right)/2;
            if(mid>x/mid)
            right=mid-1;
            else if(mid*mid==x)
            return mid;
            else 
            left=mid+1;
        }
        return right;
    }
}