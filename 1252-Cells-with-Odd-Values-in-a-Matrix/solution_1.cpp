class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n , 0));

        for(const auto& index : indices) {
            for(int i = 0; i < n; ++i) {
                ++matrix[index[0]][i];
            }

            for(int i = 0; i < m; ++i) {
                ++matrix[i][index[1]];
            }
        }

        int result = 0;
        for(const auto& row : matrix) {
            result += ranges::count_if(row, [](int num) {
                return num & 1;
            });
        }

        return result;
    }
};
