class Solution {
    struct Edge {
        int x, y;
    };

    Edge _edge;
public:
    int findCenter(vector<vector<int>>& edges) {
        _edge.x = edges.front().front();
        _edge.y = edges.front().back();

        auto edge_x = edges.back().front();
        auto edge_y = edges.back().back();
        
        return ( _edge.x == edge_x || _edge.x == edge_y ) ? _edge.x : _edge.y;
    }
};
