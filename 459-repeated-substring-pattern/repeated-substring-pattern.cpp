class Solution {
public:
    string mul(string s1,int n){
        string s2="";
        while(n--){
            s2+=s1;
        }
        return s2;
    }
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        if(n<2)return false;
        bool ans=true;
        for(int i=0;i<n-1;i++){
            string s1=s.substr(0,i+1); 
            s1=mul(s1,n/(i+1));
            //cout<<s1<<endl;
            if(s==s1)return true; 
        }
        return false;
    }
};