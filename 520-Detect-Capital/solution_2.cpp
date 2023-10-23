class Solution {
public:
    bool detectCapitalUse(string word) {
        const auto upperCount = ranges::count_if(word, ::isupper);

        return upperCount == word.size() || !upperCount || ( isupper(word[0]) && upperCount == 1);  
    }
};
