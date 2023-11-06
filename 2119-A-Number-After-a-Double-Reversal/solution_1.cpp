class Solution {
public:
    bool isSameAfterReversals(int num) {
        auto numStr = to_string(num);
        if(numStr.size() == 1) return true;
        return *numStr.rbegin() != '0';
    }
};
