class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        for_each(words.begin(), words.end(), [](auto& word) {
            sort(word.begin(), word.end());
        });

        sort(words.begin(), words.end());

        return distance(unique(words.begin(), words.end()), words.end());
    }
};
