class Solution {
public:
    bool isFascinating(int n) {
        bitset<900> bitCache;

        for(int i = 100; i <= 999; ++i) {
            const auto result = to_string(i) + to_string(2 * i) + to_string(3 * i);
            if(result.size() == 9) {
                bitset<10> bits;
                ranges::for_each(result, [&](char c) {
                    bits.set(c - '0');
                });
                if(bits.test(0)) continue;
                bits.flip(0);
                if(bits.all()) bitCache.set(i - 100);
            }
        }

        return bitCache.test(n - 100);
    }
};
