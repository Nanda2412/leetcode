class Solution {
public:
    string largestOddNumber(string num) {
        auto iter = find_if(num.rbegin(), num.rend(),[](const auto& n){
            return n & 1;
        });
        num.erase(iter.base(), num.end());
        return num;
    }
};
