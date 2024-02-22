class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)dp[i][j]=grid[i][j];
                else{
                    int up=INT_MAX,left=INT_MAX;
                    if(i>0)
                     up=grid[i][j]+dp[i-1][j];
                    if(j>0)
                     left=grid[i][j]+dp[i][j-1];

                    dp[i][j]=min(left,up);
                    
                }
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[m-1][n-1];
    }
};