/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
      void markParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent) {
        queue<TreeNode*> queue;
        queue.push(root);
        while(!queue.empty()) { 
            TreeNode* current = queue.front(); 
            queue.pop();
            if(current->left) {
                parent[current->left] = current;
                queue.push(current->left);
            }
            if(current->right) {
                parent[current->right] = current;
                queue.push(current->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent;
        markParents(root, parent);
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        int current_level = 0;
        while(!q.empty()){
            int size = q.size();
            if(current_level++ == k) break;
            for(int i=0; i<size; i++){
                TreeNode* current = q.front();
                q.pop();
                if(current->left and !visited[current->left]){
                    q.push(current->left);
                    visited[current->left] = true;
                }
                if(current->right and !visited[current->right]){
                    q.push(current->right);
                    visited[current->right] = true;
                }
                if(parent[current] and !visited[parent[current]]){
                    q.push(parent[current]);
                    visited[parent[current]] = true;
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            ans.push_back(node->val);
        }
        return ans;
    }
};