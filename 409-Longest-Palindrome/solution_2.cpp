class Solution {
public:
    int longestPalindrome(string s) {
        bitset<26> upper, lower;
        int result = 0;

        const auto update = [&](char c, bool isUpper) {
            if(isUpper) {
                if(upper[c - 'A']) result += 2;   
                upper.flip(c - 'A');
            } else {
                if(lower[c - 'a']) result += 2;  
                lower.flip(c - 'a');
            }
        };

        for(const auto& c : s) {
            update(c, isupper(c));
        }

        result += upper.any() || lower.any();

        return result;
    }
};
