class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bitset<26> charBits;

        for(char c : allowed) charBits.set(c - 'a');

        int result = 0;
        for(auto& word : words) {
            if(ranges::all_of(word, [&](char c) {
                return charBits.test(c - 'a');
            })) {
                ++result;
            }
        }

        return result;
    }
};
