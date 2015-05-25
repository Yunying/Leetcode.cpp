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
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        else if (!root->left && !root->right) return true;
        else if (root->left && !root->right) return false;
        else if (root->right && !root->left) return false;
        else{
            return recursion(root->left,root->right);
        }
        
    }
    bool recursion(TreeNode* left, TreeNode* right){
        if (!left && !right) return true;
        else if (left && !right) return false;
        else if (right && !left) return false;
        else if (left->val != right->val) return false;
        else {
            return (recursion(left->left, right->right) && recursion (left->right, right->left));
        }
        
    }
};