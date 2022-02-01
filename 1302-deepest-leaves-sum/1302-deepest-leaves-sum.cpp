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
    vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> ans;
            if(root==nullptr) return ans;
            queue<TreeNode*> q;
            q.push(root);
            while(q.size()!=0){
                int size = q.size();
                vector<int> level;
                for(int i=0; i<size; i++){
                    TreeNode* node = q.front();
                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);
                    level.push_back(node->val);
                    q.pop();
                }
                ans.push_back(level);
            }
        return ans;
    }
    int deepestLeavesSum(TreeNode* root) {
       vector<vector<int>>v=levelOrder(root);
        int sum = 0;
        for(int i=0; i<v[v.size()-1].size(); i++){
            sum += v[v.size()-1][i];
        }
        return sum;
    }
};