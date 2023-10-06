class Solution {
    auto numberOfMatches(const string& s, const string& re)
    {
        regex words_regex(re);
        const auto words_begin = sregex_iterator(s.begin(), s.end(), words_regex);
        const auto words_end = sregex_iterator();

        return distance(words_begin, words_end);
    }
public:
    bool checkRecord(string s) {
        const auto count_A = numberOfMatches(s, "A");
        const auto count_L = numberOfMatches(s, "LLL+");

        return count_A < 2 && !count_L;
    }
};
