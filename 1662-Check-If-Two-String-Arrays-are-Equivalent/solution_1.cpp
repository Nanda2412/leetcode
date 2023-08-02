class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1, str2;
        for_each(word1.begin(), word1.end(),[&](const auto& word) {
            str1 += word;
        });

        for_each(word2.begin(), word2.end(),[&](const auto& word) {
            str2 += word;
        });

        return str1 == str2;
    }
};
