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
    void inorder(TreeNode* root, vector<int> &ans){
        if(!root) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        sort(ans.begin(), ans.end());
        int i;
        bool flag = false;
        for(i=0; i<ans.size()-1; i++){
            cout<<ans[i]<<" ";
            if(ans[i]!=ans[i+1]){
                flag = true;                
                break;
            } 
        }
        return flag==false?-1:ans[i+1];
    }
};