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

    int sum=0;
    void voidrev(TreeNode* root){
        if(root==NULL) return;
        voidrev(root->right);
        root->val+=sum;
        sum=root->val;
        voidrev(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        voidrev(root);
        return root;
        
    }
};