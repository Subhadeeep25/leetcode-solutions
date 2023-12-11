/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<string>ans;
    void traverse(TreeNode* root,string s1){
        if(root->val){
            if(s1=="") s1+=to_string(root->val);
            else
            s1+="->"+to_string(root->val);
        }
        if(!root->left && !root->right){
            ans.push_back(s1);
            s1="";
            return;
        }
        if(root->left)
        traverse(root->left,s1);
        
        if(root->right)traverse(root->right,s1);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s1="";
        traverse(root,s1);
        return ans;
    }
};