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
    int mx=INT_MIN;
    int maxSum(TreeNode* root){
        if(root==NULL)return 0;
        int val=root->val;
        int left=max(maxSum(root->left),0);
        int right=max(maxSum(root->right),0);
        mx=max(mx,left+right+val);
        return max(left,right)+val;
    }
    int maxPathSum(TreeNode* root) {
        maxSum(root);
        return mx;
    }
};