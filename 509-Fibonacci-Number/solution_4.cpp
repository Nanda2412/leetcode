class Solution {
public:
    int fib(int n) {
        double phi = (1 + sqrt(5)) / 2;
        return static_cast<int>(round(pow(phi, n) / sqrt(5)));
    }
};
