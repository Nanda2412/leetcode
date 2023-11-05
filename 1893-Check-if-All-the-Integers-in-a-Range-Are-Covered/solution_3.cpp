class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        ranges::sort(ranges);
        vector<vector<int>> mergedIntervals;
        vector<int> currInterval{ranges[0][0], ranges[0][1]};
        
        for(int i = 1; i < ranges.size(); ++i) {
            if(ranges[i][0] <= currInterval[1] || ranges[i][0] == currInterval[1] + 1) {
                currInterval[1] = max(currInterval[1], ranges[i][1]);
            } else {
                mergedIntervals.emplace_back(currInterval);
                currInterval = ranges[i];
            }
        }

        mergedIntervals.emplace_back(currInterval);

        for(const auto& interval : mergedIntervals) {
            if(left >= interval[0] && right <= interval[1]) return true;
        }

        return false;
    }
};
