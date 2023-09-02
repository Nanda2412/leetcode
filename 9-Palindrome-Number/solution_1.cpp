class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;

        const auto& str_x = to_string(x);
        size_t i = 0, j = str_x.size() - 1;

        while(i < j) {
            if(str_x[i] != str_x[j]) return false;
            ++i, --j;
        }

        return true;
    }
};
