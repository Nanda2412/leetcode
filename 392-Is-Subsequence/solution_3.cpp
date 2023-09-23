class Solution {
    bool isSubsequenceHelper(int idx, const string&s, const string& t) {
        if(idx == s.size()) return true;
        if(t.find_first_of(s[idx]) == string::npos) return false;

        const auto pos = t.find_first_of(s[idx]);
        return isSubsequenceHelper( idx + 1, s, t.substr(pos + 1));
    }
public:
    bool isSubsequence(string s, string t) {
        return isSubsequenceHelper(0, s, t);
    }
};
