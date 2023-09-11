class Solution {
public:
    int lengthOfLastWord(string s) {
        smatch match;
        regex_search(s, match, regex("(\\S+)\\s*$"));
        return regex_replace(match.str(), regex(" +$"), "").size();
    }
};
