class Solution {
    void countOddsHelper(int low, int high, int& result) {
        if(low > high) return;
        if(low & 1) ++result;

        countOddsHelper(++low, high, result);
    }
public:
    int countOdds(int low, int high) {
        int result = 0;
        countOddsHelper(low, high, result);
        return result;
    }
};
