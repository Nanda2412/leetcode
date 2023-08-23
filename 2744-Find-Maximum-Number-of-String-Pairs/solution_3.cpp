class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> uniqueWords;

        int result = 0;
        for(auto& word : words) {
            if(word[0] > word[1]) swap(word[0], word[1]);

            result += uniqueWords.count(word);
            uniqueWords.emplace(word);
        }

        return result;
    }
};
