class Solution {
public:
    bool isFascinating(int n) {
        
        const auto two_n = 2 * n;
        const auto three_n = 3 * n;

        const auto result = to_string(n) + to_string(two_n) + to_string(three_n);

        if(result.size() > 9) return false;

        unordered_set<char> uniqueChars;
        ranges::for_each(result, [&](char c) {
            uniqueChars.emplace(c);
        });

        return !uniqueChars.count('0') && uniqueChars.size() == 9;
    }
};
