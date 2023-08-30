/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;

        int result = 1;
        for(const auto& child : root->children) {
            result = max(result, 1 + maxDepth(child));
        }

        return result;
    }
};
