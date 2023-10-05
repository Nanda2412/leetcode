class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        regex row_regex{"[qwertyuiop]+|[asdfghjkl]+|[zxcvbnm]+", regex::icase};

        for(const auto& word : words) {
            if(regex_match(word, row_regex)) result.emplace_back(word);
        }

        return result;
    }
};
