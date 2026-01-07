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
    long long maxp = 0;
    long long totalSum = 0;
    const int MOD = 1e9 + 7;
    
    long long sum(TreeNode* root){
        if(!root) return 0;
        long long l=sum(root->left);
        long long r=sum(root->right);
        long long a=root->val+l+r;
        return a;
    }

    long long dfs(TreeNode *root){
        if(!root) return 0;
        long long l=dfs(root->left);
        long long r=dfs(root->right);
        long long s=root->val+l+r;
        long long rem=totalSum-s;
        long long p=s*rem;
        
        maxp=max(p,maxp);
        
        return s;
    }
        

    int maxProduct(TreeNode* root) {
        totalSum=sum(root);
        dfs(root);
        return maxp%MOD;
    }
};