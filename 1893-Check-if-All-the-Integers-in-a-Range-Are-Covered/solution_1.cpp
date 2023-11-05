class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_set<int> uniqueElems;

        for(int i = left; i <= right; ++i) {
            for(const auto& range : ranges) {
                if(i >= range.front() && i <= range.back()) uniqueElems.emplace(i);
            }
        }

        return uniqueElems.size() == right - left + 1;
    }
};
