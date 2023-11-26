class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        unordered_set<int> rowIndices, colIndices;

        for(const auto& index : indices) {
            if(rowIndices.count(index[0])) rowIndices.erase(index[0]);
            else rowIndices.emplace(index[0]);

            if(colIndices.count(index[1])) colIndices.erase(index[1]);
            else colIndices.emplace(index[1]);
        }

        return (n * rowIndices.size() + m * colIndices.size()) - (2 * rowIndices.size() * colIndices.size());
    }
};
