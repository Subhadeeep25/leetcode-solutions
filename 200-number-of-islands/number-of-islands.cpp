class Solution {
public:
    void check(vector<vector<char>>& grid,int i,int j){
        if(grid[i][j]=='1'){
            grid[i][j]='2';
            
            if(i<grid.size()-1)check(grid,i+1,j);
            if(i>0) check(grid,i-1,j);
            if(j<grid[0].size()-1)check(grid,i,j+1);
            if(j>0)check(grid,i,j-1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='2')continue;
                if(grid[i][j]=='1'){
                    ans++;
                    check(grid,i,j);
                } 
            }
        }
        return ans;
    }
};