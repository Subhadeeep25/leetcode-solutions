class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<int,int>mp;
        int mx=-1;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                int diff=i-mp[s[i]];
                 mx=max(mx,diff-1);
            }else{
                mp[s[i]]=i;
            }
           
        }
        return mx;
    }
};