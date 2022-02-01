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
    TreeNode* create(vector<int>&v, int l, int r){
            if(l>r) return NULL;
            int mid = (l+r)/2;
            int maxm = -1001;
            int ind=-1;
            for(int i=l; i<=r; i++){
                maxm = max(maxm, v[i]);
            }
            for(int i=l; i<=r; i++){
                if(v[i]==maxm) ind = i;
            }
            TreeNode* root = new TreeNode(maxm);
            root->left = create(v, l, ind-1);
            root->right = create(v, ind+1, r);
            return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return create(nums, 0, nums.size()-1);
    }
};