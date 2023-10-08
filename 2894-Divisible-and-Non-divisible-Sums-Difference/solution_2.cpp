class Solution {
public:
    int differenceOfSums(int n, int m) {
        const auto sum_total = (n * (n + 1)) / 2;
        const auto sum_divisible_by_m = (n/m * (m + m * floor(n/m)))/ 2;
        const auto sum_not_divisible_by_m = sum_total - sum_divisible_by_m;

        return sum_not_divisible_by_m - sum_divisible_by_m;
    }
};
