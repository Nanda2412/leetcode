class Solution {
public:
    int similarPairs(vector<string>& words) {
        int result = 0;
        for(int i = 0; i < words.size(); ++i) {
            unordered_set<char> uniqueChars_1(words[i].begin(), words[i].end());
            for(int j = i + 1; j < words.size(); ++j) {
                unordered_set<char> uniqueChars_2(words[j].begin(), words[j].end());
                if(uniqueChars_1 == uniqueChars_2) ++result;
            }
        }

        return result;
    }
};
