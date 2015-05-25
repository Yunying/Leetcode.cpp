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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        queue<int> layers;
        if (!root) return res;
        q.push(root);
        layers.push(0);
        while (!q.empty()){
            TreeNode* i = q.front();
            q.pop();
            if (i->left){
                q.push(i->left);
                layers.push(layers.front()+1);
            } 
            if (i->right){
                q.push(i->right);
                layers.push(layers.front()+1);
            } 
            if (res.size() == layers.front()) res.push_back(vector<int>());
            res[layers.front()].push_back(i->val);
            layers.pop();
        }
        return res;
    }
};