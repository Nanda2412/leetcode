class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        const auto cmp = [](int a, int b) {
            bitset<32> bitsA(a), bitsB(b);
            return bitsA.count() == bitsB.count() ? a < b : 
                    bitsA.count() < bitsB.count();
        };

        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};
