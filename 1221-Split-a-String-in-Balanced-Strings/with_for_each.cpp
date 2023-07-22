class Solution {
public:
    int balancedStringSplit(string s) {
       int count_l = 0, count_r = 0, result = 0;
       for_each(s.cbegin(), s.cend(),[&](const auto& c) {
           count_l += c == 'L', count_r += c == 'R';
           if(count_l == count_r) {
               ++result, count_l = count_r = 0;
           }
       });

       return result;
    }
};
