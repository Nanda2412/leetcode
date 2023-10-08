class Solution {
public:
    int differenceOfSums(int n, int m) {
        int diffOfSum = 0;
        for(int i = 1; i <= n; ++i) {
           diffOfSum += i % m ? i : -i;
        }

        return diffOfSum;
    }
};
