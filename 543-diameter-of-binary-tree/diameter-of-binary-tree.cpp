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
private:    
    int findHeight(TreeNode* root){
        if(root == NULL) return 0;
        int left = findHeight(root->left);
        int right = findHeight(root->right);

        return 1 + max(left, right);
    }
    void findDiameter(TreeNode* root, int &maxDiameter){
        if(root == NULL) return;

        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);

        maxDiameter = max(maxDiameter, leftHeight + rightHeight);
        findDiameter(root->left, maxDiameter);
        findDiameter(root->right, maxDiameter);

    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        findDiameter(root, maxDiameter);
        return maxDiameter;
    }
};