class Solution {
public:
    bool isPalindrome(string s) {
        string s_alnum;
        for(const auto& c : s) {
            if(isalnum(c)) s_alnum += tolower(c);
        }

        string s_alnum_r = s_alnum;
        reverse(s_alnum_r.begin(), s_alnum_r.end());

        return s_alnum == s_alnum_r;
    }
};
