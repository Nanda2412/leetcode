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
        int result = 0;
        queue<TreeNode*> q;
        q.emplace(root);
        
        while(!q.empty()) {
            const auto curr = q.front();
            q.pop();

            if(curr) {
                result += curr->val >= low && curr->val <= high ? curr->val : 0;

                if(curr->val > low) {
                    q.emplace(curr->left);
                }
                if(curr->val < high) {
                    q.emplace(curr->right);
                }
            }
        }

        return result;
    }
};
