class Solution {
public:
    int totalMoney(int n) {
        int in=1,sum=1,i=1,j=1;
        while(i<n){
            if(j%7==0)
            {
                in+=1;
            }
            sum+=in+j%7;
            j++;
            i++;
        }
        return sum;
    }
};