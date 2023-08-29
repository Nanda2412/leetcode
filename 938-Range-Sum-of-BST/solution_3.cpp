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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;

        int result = root->val >= low && root->val <=high ? root->val : 0;
        if(low < root->val) result += rangeSumBST(root->left, low, min(root->val, high));
        if(high > root->val) result += rangeSumBST(root->right, max(root->val, low), high);

        return result;
    }
};
