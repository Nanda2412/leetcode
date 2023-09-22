class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int result = 0;
        regex vowels_regex{"^([aeiou][a-z]+[aeiou]|[aeiou])+$"};

        for(int i = left; i <=right; ++i) {
            if(regex_match(words[i], vowels_regex)) {
                ++result;
            }
        }

        return result;
    }
};
