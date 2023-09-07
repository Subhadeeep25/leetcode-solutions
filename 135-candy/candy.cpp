class Solution {
public:
    int candy(vector<int>& ratings) {
        int left2right[ratings.size()];
        int right2left[ratings.size()];
        int n=ratings.size();
        left2right[0]=1;
        for(int i=0;i<n;i++){
             left2right[i]=1;
            right2left[i]=1;
        }
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1])
            left2right[i]=left2right[i-1]+1;
            
        }
        right2left[n-1]=1;
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])
            right2left[i]=right2left[i+1]+1;
        }

        int ans[n],sum=0;
        for(int i=0;i<ratings.size();i++){
            cout<<left2right[i]<<","<<right2left[i]<<"|";
            ans[i]=max(left2right[i],right2left[i]);
            sum+=ans[i];
        }
        return sum;

    }
};