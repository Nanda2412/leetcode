class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> uniqueChars;

        int result = 0;
        for(const auto& c : s) {
            if(!uniqueChars.count(c)) {
                uniqueChars.emplace(c);
            } else {
                result += 2;
                uniqueChars.erase(c);
            }
        }

        result += !uniqueChars.empty();

        return result;
    }
};
