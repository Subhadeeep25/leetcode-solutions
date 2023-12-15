class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string s1=paths[0][1];
        int i=1;
        while(true){
        for(i=1;i<paths.size();i++){
               if(paths[i][0]==s1){
                   s1=paths[i][1];
                   break;
               }
        }
        if(i==paths.size())return s1;
        }
        return s1;
    }
};