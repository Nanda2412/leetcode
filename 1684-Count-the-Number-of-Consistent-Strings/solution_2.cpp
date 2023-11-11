class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        array<char, 26> charCount; charCount.fill(0);

        for(char c : allowed) ++charCount[c - 'a'];

        int result = 0;
        for(auto& word : words) {
            if(ranges::all_of(word, [&](char c) {
                return charCount[c - 'a'] == 1;
            })) {
                ++result;
            }
        }

        return result;
    }
};
