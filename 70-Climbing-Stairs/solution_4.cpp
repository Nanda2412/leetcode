class Solution {
public:
    int climbStairs(int n) {
        // https://en.wikipedia.org/wiki/Fibonacci_sequence#Computation_by_rounding
        double phi = (1 + sqrt(5)) / 2;
        return static_cast<int>(pow(phi, n + 1) / sqrt(5) + 0.5);
    }
};
