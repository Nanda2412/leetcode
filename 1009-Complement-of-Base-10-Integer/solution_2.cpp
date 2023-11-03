class Solution {
public:
    int bitwiseComplement(int n) {
        if(!n) return 1;
        string result;

        while(n) {
            result += (n & 1) ? '0' : '1';
            n >>= 1;
        }
        ranges::reverse(result);
        bitset<32> bits(result);
        return bits.to_ulong();
    }
};
