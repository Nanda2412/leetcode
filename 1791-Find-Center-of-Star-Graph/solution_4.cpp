class Solution {
    struct Edge {
        int x, y;
    };

    Edge _edge;
public:
    int findCenter(vector<vector<int>>& edges) {
        _edge.x = edges.front().front();
        _edge.y = edges.front().back();

        if(_edge.x == edges.back().front()) return _edge.x;
        if(_edge.x == edges.back().back()) return _edge.x;

        if(_edge.y == edges.back().front()) return _edge.y;
        if(_edge.y == edges.back().back()) return _edge.y;

        // never reaches here
        return -1;
    }
};
