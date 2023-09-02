class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;

        const auto& str_x = to_string(x);
        auto r_str_x = str_x;
        reverse(r_str_x.begin(), r_str_x.end());
        return r_str_x == str_x;
    }
};
