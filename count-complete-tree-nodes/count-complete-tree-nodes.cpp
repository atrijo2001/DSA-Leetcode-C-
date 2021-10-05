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
    int countLH(TreeNode* root){
        if(!root) return 0;
        return 1 + countLH(root->left);
    }
    int countRH(TreeNode* root){
        if(!root) return 0;
        return 1 + countLH(root->right);
    }
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        // int lh = countLH(root);
        // int rh = countRH(root);
        // cout<<lh<<" "<<rh;
        // if(lh==rh) return (1<<lh) - 1;
        return 1+ countNodes(root->left) + countNodes(root->right);
    }
};