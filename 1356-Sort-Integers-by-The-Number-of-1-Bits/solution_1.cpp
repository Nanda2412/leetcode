class Solution {
    int CountOneBits(int a) {
        int result = 0;
        while(a) {
            ++result;
            a &= a - 1;
        }

        return result;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        const auto cmp = [&](int a, int b) {
            return CountOneBits(a) == CountOneBits(b) ? a < b : 
                    CountOneBits(a) < CountOneBits(b);
        };

        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};
