class Solution {
public:
    string reversePrefix(string word, char ch) {
        const size_t pos = word.find(ch) + 1;
        reverse(word.begin(), word.begin() + pos);
        return word;
    }
};
