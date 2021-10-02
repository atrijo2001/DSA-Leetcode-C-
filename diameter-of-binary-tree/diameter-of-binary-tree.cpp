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
    int diameter(TreeNode* root, int dm=0){
        maxm(root, dm);
        return dm;
    }
    int maxm(TreeNode* root, int &maxi){
        if(root==NULL) return 0;
        int lh = maxm(root->left, maxi);
        int rh = maxm(root->right, maxi);
        maxi = max(maxi, lh+rh);
        return 1 + max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root);
    }
};