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
    bool evaluateTree(TreeNode* root) {
        if(!root) return false;

        if(!root->left && !root->right) return root->val;

        bool l_result;
        if(root->left) {
            l_result = evaluateTree(root->left);
        }

        if(!l_result && root->val & 1) return false;
        if(l_result && !(root->val & 1)) return true;

        bool r_result;
        if(root->right) {
            r_result = evaluateTree(root->right);
        }

        return root->val & 1 ? l_result && r_result : l_result || r_result;
    }
};
