class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rows(m, 0), cols(n, 0);

        static const auto is_odd = [](int n) {
            return n & 1;
        };

        for(const auto& index : indices) {
            ++rows[index[0]];
            ++cols[index[1]];
        }

        const auto oddRowIncrement = ranges::count_if(rows, is_odd);
        const auto oddColIncrement = ranges::count_if(cols, is_odd);
        const auto evenRowIncrement = m - oddRowIncrement;
        const auto evenColIncrement = n - oddColIncrement;

        return (oddRowIncrement * evenColIncrement + evenRowIncrement * oddColIncrement);
    }
};
