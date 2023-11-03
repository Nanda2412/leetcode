class Solution {
public:
    int bitwiseComplement(int n) {
        return abs(pow(2, floor(log2(n) + 1)) - n - 1);
    }
};
