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
    vector<string>ans;
    void dfs(TreeNode *root,string temp)
    {
       if(root==NULL)
           return;
        if(root->left==NULL and root->right==NULL)
        {
            temp+=to_string(root->val);
            ans.push_back(temp);
            return;
        }
        temp+=to_string(root->val);
        dfs(root->left,temp);
        dfs(root->right,temp);
    }
    int sumNumbers(TreeNode* root) {
        string res="";
        dfs(root,res);
        int temp=0;
        for(auto i:ans){
            temp+=stoi(i);
        }
        return temp;
    }
};