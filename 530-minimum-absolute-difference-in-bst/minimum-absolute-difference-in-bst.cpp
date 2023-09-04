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
    vector<int>nodes;
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int mindiff=INT_MAX;
        for(int i=1;i<nodes.size();i++){
            mindiff=min(mindiff,nodes[i]-nodes[i-1]);
        }
        return mindiff;
    }
    void inorder(TreeNode* root){
        if(root==NULL)return;
        inorder(root->left);
        nodes.push_back(root->val);
        inorder(root->right);
    }
};