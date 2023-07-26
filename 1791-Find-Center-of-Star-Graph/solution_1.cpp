class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> countMap;
        for(const auto& edge : edges) {
            countMap[edge.front()]++, countMap[edge.back()]++; 
        }

        int result = -1;
        for(const auto&[point, count] : countMap) {
            if(count == edges.size()) {
                result = point;
                break;
            }
        }

        return result;
    }
};
