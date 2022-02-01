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
    int helper(TreeNode* root, int maxi){
        if(!root) return 0;
        if(maxi<=root->val){
            maxi = root->val;
            return 1+helper(root->left, maxi)+helper(root->right, maxi);
        } else{
            return helper(root->left, maxi)+helper(root->right, maxi);
        }
    }
    int goodNodes(TreeNode* root) {
        int maxi = INT_MIN;
        // int good = 0;
        return helper(root, maxi);
        // return good;
    }
};