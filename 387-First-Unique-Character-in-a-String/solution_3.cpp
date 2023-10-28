class Solution {
public:
    int firstUniqChar(string s) {
        for(char c : s) {
            const auto pos = s.find_first_of(c);
            if(pos == s.find_last_of(c)) return pos;
        }

        return -1;
    }
};
