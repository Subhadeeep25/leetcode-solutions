class Solution {
public:
int check(string word, unordered_map<char,int>mp){
    int len=word.size();
    for(auto j:word){
        if(mp.find(j)!=mp.end() && mp[j]>0){
            mp[j]--;
        }
        else return 0;          
    }
    return len;
}
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int ans=0;
        for(int i=0;i<chars.size();i++){
            mp[chars[i]]++;
        }
        for(int i=0;i<words.size();i++){
            ans+=check(words[i],mp);
        }
        return ans;
    }
};