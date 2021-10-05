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
    bool helper(TreeNode* leftnode, TreeNode* rightnode){
        if((!leftnode and rightnode) or (!rightnode and leftnode)) return false;
        if(!leftnode and !rightnode) return true;
        if(leftnode->val != rightnode->val) return false;
        bool lr = helper(leftnode->left, rightnode->right);
        if(!lr) return false;
        bool rr = helper(leftnode->right, rightnode->left);
        if(!rr) return false;
        if(lr and rr) return true;
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left, root->right);
    }
};