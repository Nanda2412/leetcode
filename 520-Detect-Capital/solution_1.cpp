class Solution {
public:
    bool detectCapitalUse(string word) {
        return ranges::all_of(word, ::isupper) || ranges::all_of(word, ::islower) || (isupper(word[0]) && ranges::all_of(word.substr(1), ::islower));
    }
};
