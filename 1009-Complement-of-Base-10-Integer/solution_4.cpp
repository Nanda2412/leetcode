class Solution {
public:
    int bitwiseComplement(int n) {
        const int digitCount = !n ? 1 :  static_cast<int>(floor(log2(n))) + 1;
        return static_cast<long>(( 1 << digitCount)) - 1 - n;
    }
};
