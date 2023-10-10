class Solution {
public:
    int secondHighest(string s) {
        bitset<10> bits;

        for(const auto& c : s) {
            if(isdigit(c)) {
                bits.set(c - '0');   
            }
        }

        int count = 0;
        for(int i = 9; i >= 0; --i) {
            if(bits[i]) ++count;
            if(count == 2) return i;
        }

        return -1;
    }
};
