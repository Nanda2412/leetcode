class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rows(m, 0), cols(n, 0);

        for(const auto& index : indices) {
            ++rows[index[0]];
            ++cols[index[1]];
        }

        int result = 0;
        for(int i = 0; i < rows.size(); ++i) {
            for(int j = 0; j < cols.size(); ++j) {
                if((rows[i] + cols[j]) & 1) ++result;
            }
        }

        return result;
    }
};
