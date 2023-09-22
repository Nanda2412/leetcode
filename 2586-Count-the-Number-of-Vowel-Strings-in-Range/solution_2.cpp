class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int result = 0;
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};

        for(int i = left; i <=right; ++i) {
            if(vowels.count(words[i].front()) && vowels.count(words[i].back())) {
                ++result;
            }
        }

        return result;
    }
};
