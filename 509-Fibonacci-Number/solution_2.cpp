class Solution {
public:
    int fib(int n) {
        if(n < 2) {
            if(n == 0) return 0;
            else return 1;
        }

        int result = 2, n_1 = 1, n_2 = 0, counter = 2;
        while(counter++ <= n) {
            result = n_1 + n_2;
            n_2 = n_1;
            n_1 = result;
        }

        return result;
    }
};
