class Solution {
    using ulong = unsigned long;
public:
    int similarPairs(vector<string>& words) {
        unordered_map<ulong, size_t> countMap;
        for(auto& word : words) {
            bitset<26> bits;
            for(const auto& c : word) {
                bits.set(c - 'a');
            }

            ++countMap[bits.to_ulong()];
        }

        int result = 0;
        for(const auto&[_, count] : countMap) {
            result += ( count * (count - 1) ) / 2;
        }

        return result;
    }
};
