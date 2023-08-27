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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        q.emplace(root);
        auto nodes_at_curr_level = q.size();

        int depth = -1;
        while(!q.empty()) {
            const auto curr = q.front();
            q.pop();
            --nodes_at_curr_level;
            if(curr) {
                q.emplace(curr->left);
                q.emplace(curr->right);
            }

            if(!nodes_at_curr_level) {
                ++depth;
                nodes_at_curr_level = q.size();
            }
        }

        return depth;
    }
};
