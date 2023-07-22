class Solution {
public:
    int balancedStringSplit(string s) {
       int count = 0, result = 0;
       for_each(s.cbegin(), s.cend(),[&](const auto& c) {
           count += c == 'L', count -= c == 'R';
           if(!count) {
               ++result;
           }
       });

       return result;
    }
};
