class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        bitset<32> bits(n);
        return bits.count() == 1;
    }
};
