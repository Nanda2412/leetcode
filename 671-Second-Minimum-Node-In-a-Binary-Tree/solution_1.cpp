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
    void findSeondMinimumValueHelper(TreeNode* root, set<int>& values) {
        if(root) {
            values.emplace(root->val);
            findSeondMinimumValueHelper(root->left, values);
            findSeondMinimumValueHelper(root->right, values);
        }
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        set<int> values;
        findSeondMinimumValueHelper(root, values);
        if(values.size() == 1) return -1;
        auto it = values.begin(); ++it;
        return *it;
    }
};
