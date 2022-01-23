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
    void helper(TreeNode* root, vector<string> &ans, string str){
        if(!root) return;
        if(!root->left and !root->right){
            str += to_string(root->val);
            ans.push_back(str);
            string str = "";
            return;
        }
        str += to_string(root->val);
        str += "->";
        helper(root->left, ans, str);
        helper(root->right, ans, str);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root, ans, "");
        return ans;
    }
};