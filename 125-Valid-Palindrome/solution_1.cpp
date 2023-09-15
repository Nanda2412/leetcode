class Solution {
public:
    bool isPalindrome(string s) {
        size_t left = 0, right = s.size() - 1;
        while(left < right) {
            if(isalnum(s[left]) && isalnum(s[right])) {
                if(tolower(s[left++]) != tolower(s[right--])) return false;
            } else {
                !isalnum(s[left]) ? ++left : --right;
            }
        }

        return true;
    }
};
