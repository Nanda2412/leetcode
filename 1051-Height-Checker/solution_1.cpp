class Solution {
public:
    int heightChecker(vector<int>& heights) {
        auto expected = heights;
        ranges::sort(expected);
        int result = 0;
        for(size_t i = 0; i < heights.size(); ++i) {
            if(heights[i] != expected[i]) ++result;
        }

        return result;
    }
};
