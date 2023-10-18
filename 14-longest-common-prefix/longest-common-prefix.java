class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String s1=strs[0];
        String s2=strs[strs.length-1];
        String ans="";
        int i=Math.min(s1.length(),s2.length()),j=0;
        while(j<i){
            if(s1.charAt(j)==s2.charAt(j)){
                ans+=s1.charAt(j);
                j++;
            }
            else break;

        }
        return ans;
    }
}