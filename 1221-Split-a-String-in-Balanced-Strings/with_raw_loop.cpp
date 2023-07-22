class Solution {
public:
    int balancedStringSplit(string s) {
       int count_l = 0, count_r = 0, result = 0;
       for(int i = 0; i < s.size(); ++i) {
            count_l += s[i] == 'L', count_r += s[i] == 'R';
            if(count_l == count_r) {
                ++result;
                count_l = count_r = 0;
            }
       }

       return result;
    }
};
