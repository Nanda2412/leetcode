class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
        int i = left, j = left;
        while(i <= right) {
            for(const auto& range : ranges) {
                if(i >= range.front() && i <= range.back()) {
                    ++j;
                    break;
                }
            }
            ++i;
        }

        return j > right;
    }
};
