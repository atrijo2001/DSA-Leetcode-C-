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
    void helper(TreeNode* root, int maxi, int& good){
        if(!root) return;
        if(maxi<=root->val){
            maxi = root->val;
            good++;
        }
        helper(root->left, maxi, good);
        helper(root->right, maxi, good);
    }
    int goodNodes(TreeNode* root) {
        int maxi = INT_MIN;
        int good = 0;
        helper(root, maxi, good);
        return good;
    }
};