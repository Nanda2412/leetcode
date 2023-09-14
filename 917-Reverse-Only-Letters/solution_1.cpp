class Solution {
public:
    string reverseOnlyLetters(string s) {
        size_t left = 0, right = s.size() - 1;
        while(left < right) {
            if(isalpha(s[left]) && isalpha(s[right])){
                swap(s[left++], s[right--]);
            } else{
                !isalpha(s[left]) ? ++left : --right; 
            }
        }

        return s;
    }
};
