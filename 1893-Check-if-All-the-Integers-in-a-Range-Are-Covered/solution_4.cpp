class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        ranges::sort(ranges);

        for(int i = 1; i < ranges.size(); ++i) {
            if(ranges[i][0] <= ranges[i - 1][1] || ranges[i][0] == ranges[i - 1][1] + 1) {
                ranges[i][0] = ranges[i - 1][0];
                ranges[i][1] = max(ranges[i - 1][1], ranges[i][1]);
            }
        }

        for(const auto& interval : ranges) {
            if(left >= interval[0] && right <= interval[1]) return true;
        }

        return false;
    }
};
