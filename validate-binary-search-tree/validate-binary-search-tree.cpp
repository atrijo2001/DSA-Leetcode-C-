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
    void inOrderTraversal(TreeNode* root, vector<long long int> &result)
{
    if(root==NULL)
        return;
    inOrderTraversal(root->left,result);
    result.push_back(root->val);
    inOrderTraversal(root->right,result);
}
    
public:
    bool isValidBST(TreeNode* root) {
     vector<long long int> result;
     inOrderTraversal(root,result);
     for(long long int i=0;i<result.size()-1;i++)
     {
         if(result[i+1]<=result[i])
             return false;
     }
     return true;
    }
};