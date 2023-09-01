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
    vector<int> twoSmallest(TreeNode* root) {
        if(!root) return vector<int>{};

        auto left_result = twoSmallest(root->left);
        auto right_result = twoSmallest(root->right);

        left_result.emplace_back(root->val);
        left_result.insert(left_result.end(), right_result.begin(), right_result.end());

        sort(left_result.begin(), left_result.end());
        left_result.erase(unique(left_result.begin(), left_result.end()), left_result.end());
        return left_result.size() > 1 ? vector<int>{left_result[0], left_result[1]} : left_result;
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        const auto result = twoSmallest(root);
        return result.size() == 1 ? -1 : result.back();
    }
};
