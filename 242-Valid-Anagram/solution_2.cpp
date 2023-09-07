class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> charCount;

        for(const auto& c : s) {
            ++charCount[c];
        }

        for(const auto& c : t) {
            --charCount[c];
        }

        return all_of(charCount.cbegin(), charCount.cend(),[](const auto& p) {
            return p.second == 0;
        });
    }
};
