class Solution {
    public String mergeAlternately(String word1, String word2) {
        String ans="";
        for(int i=0;i<Math.max(word1.length(),word2.length());i++){
            if(i>=word1.length()){
                ans+=word2.charAt(i);
            }else if(i>=word2.length()){
                ans+=word1.charAt(i);
            }else{
                ans+=word1.charAt(i);
                ans+=word2.charAt(i);
            }
        }
        return ans;
    }
}