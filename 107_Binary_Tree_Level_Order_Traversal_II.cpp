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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> myvec;
        queue<TreeNode*> q;
        queue<int> index;
        if (root == NULL){
            return myvec;
        }
        
        q.push(root);
        index.push(0);
        while(!q.empty()){
            TreeNode* tr = q.front();
            int ind = index.front();
            if (ind == myvec.size()){
                myvec.push_back(vector<int>());
                myvec[ind].push_back(tr->val);
            }
            else{
                myvec[ind].push_back(tr->val);
            }
            q.pop();
            index.pop();
            if (tr->left != NULL){
                q.push(tr->left);
                index.push(ind+1);
            }
            if (tr->right != NULL){
                q.push(tr->right);
                index.push(ind+1);
            }
            
        }
        reverse(myvec.begin(), myvec.end());
        return myvec;
    }
};