class Solution {
    bool vowelsAtStartAndEnd(const string& str, size_t len) {
        if((str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u') && ((str[len - 1] == 'a' || str[len - 1] == 'e' || str[len - 1] == 'i' || str[len - 1] == 'o' || str[len - 1] == 'u'))) {
            return true;
        }

        return false;
    }
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int result = 0;

        for(int i = left; i <=right; ++i) {
            const auto len = words[i].size();
            if(vowelsAtStartAndEnd(words[i], len)) {
                ++result;
            }
        }

        return result;
    }
};
