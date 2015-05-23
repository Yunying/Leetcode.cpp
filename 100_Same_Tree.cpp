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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> first;
        queue<TreeNode*> second;
        
        if (!p && !q) return true;
        if (p && !q || !p && q) return false;
        
        first.push(p);
        second.push(q);
        
        while (!first.empty()){
            if (second.empty())return false;
            TreeNode* pnode = first.front(); first.pop();
            TreeNode* qnode = second.front(); second.pop();
            if (qnode->val != pnode->val) return false;
            if (pnode->left && qnode->left){
                first.push(pnode->left);second.push(qnode->left);
            } 
            else if (!pnode->left && !qnode->left){}
            else{
                return false;
            }
            if (pnode->right && qnode->right){
                first.push(pnode->right); second.push(qnode->right);
            } 
            else if (!qnode->right && !pnode->right){}
            else{
                return false;
            }
            
        }
        return true;
    }
};