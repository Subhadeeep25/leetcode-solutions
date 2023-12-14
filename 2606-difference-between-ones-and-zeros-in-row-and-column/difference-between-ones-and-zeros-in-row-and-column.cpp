class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<int>row1(n),col1(m),row0(n),col0(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row1[i]+=grid[i][j];
                col1[j]+=grid[i][j];
                if(grid[i][j]==0){
                    row0[i]++;
                    col0[j]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=row1[i]+col1[j]-row0[i]-col0[j];
                //cout<<row1[i]<<" "<<col1[j]<<" "<<row0[i]<<" "<<col0[j];
            }
            cout<<endl;
        }
        return grid;
    }
};