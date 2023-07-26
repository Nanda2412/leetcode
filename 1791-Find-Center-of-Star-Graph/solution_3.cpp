class Solution {
    struct Edge {
        int x, y;
    };

    Edge _edge;
public:
    int findCenter(vector<vector<int>>& edges) {
       for(const auto& edge : edges) {
            if(_edge.x == std::min(edge.front(), edge.back())) return _edge.x;
            if(_edge.y == std::max(edge.front(), edge.back())) return _edge.y;

            
            _edge.x = std::min(edge.front(), edge.back());
            _edge.y = std::max(edge.front(), edge.back());
       }

        // will never reach here
        return -1;
    }
};
