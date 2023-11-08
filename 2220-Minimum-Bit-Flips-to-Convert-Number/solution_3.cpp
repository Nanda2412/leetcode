class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32> bits(start ^ goal);
        return bits.count();
    }
};
