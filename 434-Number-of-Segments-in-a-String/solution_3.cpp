class Solution {
public:
    int countSegments(string s) {

        const auto words_regex = regex("\\S+");
        const auto words_begin = sregex_iterator(s.begin(), s.end(), words_regex);
        const auto words_end = sregex_iterator();
 
        return std::distance(words_begin, words_end);
    }
};
