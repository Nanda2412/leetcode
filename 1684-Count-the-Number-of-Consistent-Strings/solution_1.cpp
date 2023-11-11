class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> uniqueChars(allowed.begin(), allowed.end());

        int result = 0;
        for(auto& word : words) {
            if(ranges::all_of(word, [&](char c) {
                return uniqueChars.count(c);
            })) {
                ++result;
            }
        }

        return result;
    }
};
