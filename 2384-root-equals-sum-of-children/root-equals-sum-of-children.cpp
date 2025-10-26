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
    int summ(TreeNode* root){
        int sum=0;
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL)sum+=root->val;
        sum+=summ(root->left);
        sum+=summ(root->right);
        return sum;

        
    }
    bool checkTree(TreeNode* root) {
        int sum=summ(root);
        TreeNode* troot=root;
        if(troot->val==sum) return true;
        else return false;
    }
};