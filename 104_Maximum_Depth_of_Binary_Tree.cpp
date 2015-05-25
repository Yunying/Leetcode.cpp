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
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        else{
            return max(findDepth(root->left, 1), findDepth(root->right, 1));
        }
    }
    
    int findDepth(TreeNode* node, int dep){
        if (!node) return dep;
        else{
            return max(findDepth(node->left, dep+1), findDepth(node->right, dep+1));
        }
    }

};