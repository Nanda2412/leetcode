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
        queue<Node*> q;
        if(root) q.emplace(root);
        int nodes_at_curr_level = q.size();
        int result = 0;

        while(!q.empty()) {
            const auto curr = q.front();
            q.pop();
            --nodes_at_curr_level;

            if(curr) {
                for(const auto& child : curr->children) {
                    q.emplace(child);
                }
            }

            if(!nodes_at_curr_level) {
                ++result;
                nodes_at_curr_level = q.size();
            }
        }

        return result;
    }
};
