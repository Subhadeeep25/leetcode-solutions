class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int n=s.length();
        string ans="";
        if(n==0)return ans;
        st.push(s[0]); 
        for(int i=1;i<n;i++){
            if(s[i]==')'){
                if(st.size()!=1)ans+=s[i];
                st.pop();
            }
            else if(s[i]=='('){
                if(!st.empty()) ans+=s[i];
                st.push(s[i]);
            }
        }
        return ans;
    }
};