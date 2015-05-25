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
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode*> nodes;
        queue<int> layers;
        nodes.push(root);
        layers.push(1);
        while(!nodes.empty()){
            TreeNode* tr = nodes.front();
            nodes.pop();
            if (tr->left) {
                nodes.push(tr->left);
                layers.push(layers.front()+1);
            }
            if (tr->right){
                nodes.push(tr->right);
                layers.push(layers.front()+1);
            } 
            else if (!tr->left && !tr->right){
                return layers.front();
            }
            layers.pop();
            
        }
    }
};