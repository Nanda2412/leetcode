class Solution {
public:
    int minBitFlips(int start, int goal) {
        int result = 0, i = 0;
        while(i < 32) {
            if(start & (1 << i) ^ goal & (1 << i)) ++result;
            ++i;
        }

        return result;
    }
};
