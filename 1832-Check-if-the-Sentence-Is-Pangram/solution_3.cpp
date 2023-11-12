class Solution {
public:
    bool checkIfPangram(string sentence) {
        bitset<26> bits;
        for(char c : sentence) {
            bits.set(c - 'a');
        }

        return bits.all();
    }
};
