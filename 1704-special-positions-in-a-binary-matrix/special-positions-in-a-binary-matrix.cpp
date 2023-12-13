class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        unordered_map<int,int>row,col;
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    if(row[i]==1 && col[j]==1) ans++;
                }
            }
        }
        return ans;

    }
};