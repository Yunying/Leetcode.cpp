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
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        if (abs(depth(root->left,0)-depth(root->right,0))>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }

    
    int depth(TreeNode* node, int dep){
        if (!node) return dep;
        else{
            return max(depth(node->left, dep+1), depth(node->right, dep+1));
        }
    }
};