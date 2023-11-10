class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        const auto cmp = [](int a, int b) {
            return __builtin_popcount(a) == __builtin_popcount(b) ? a < b : 
                    __builtin_popcount(a) < __builtin_popcount(b);
        };

        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};
