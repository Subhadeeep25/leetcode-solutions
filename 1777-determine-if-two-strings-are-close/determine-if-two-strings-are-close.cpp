class Solution {
public:
    bool samecharacters(unordered_map<char,int>mp1,string word2){
        for(auto i:word2){
            if(mp1.find(i)==mp1.end())return false;
        }
        return true;
    }
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>mp1,mp2;
        if(word1.size()!=word2.size())return false;
        for(auto i:word1){
            mp1[i]++;
        }
        for(auto i:word2){
            mp2[i]++;
        }
        //for(auto i = mp1.begin(); i != mp1.end(); i++){
        //    cout<<i->first<<i->second<<";";
        //}
        for(auto i = mp1.begin(); i != mp1.end(); i++){
            bool flag=false;
            for(auto j = mp2.begin(); j != mp2.end(); j++){
                if(i->second==j->second){
                    //cout<<i->first<<i->second<<" "<<j->first<<j->second<<endl;
                    mp2[j->first]=0;
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                cout<<1;
                return false;
                
            }
        }
        return samecharacters(mp1,word2) && true;
    }
};