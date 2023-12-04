class Solution {
public:
    int heightChecker(vector<int>& heights) {
        unordered_map<int, int> freqMap;
        auto MAX = numeric_limits<int>::min();
        for(const auto& height : heights) {
            ++freqMap[height];
            MAX = max(MAX, height);
        }

        vector<int> expected;
        for(int i = 1; i <= MAX; ++i) {
            if(freqMap.contains(i)) {
                fill_n(back_inserter(expected), freqMap[i], i);
            }
        }

        int result = 0;
        for(size_t i = 0; i < heights.size(); ++i) {
            if(heights[i] != expected[i]) ++result;
        }

        return result;
    }
};
