class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       unordered_set<int> visitedNodes;
       for(const auto& edge : edges) {
           if(visitedNodes.count(edge.front())) return edge.front();
           if(visitedNodes.count(edge.back())) return edge.back();

           visitedNodes.emplace(edge.front());
           visitedNodes.emplace(edge.back());
       }

        // will never reach here
        return -1;
    }
};
