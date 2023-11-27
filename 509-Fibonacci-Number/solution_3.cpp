class Solution {
    unordered_map<int, int> cache;
public:
    int fib(int n) {
        if(n < 2) {
            if(n == 0) return 0;
            else return 1;
        }

        if(!cache.count(n)) {
            cache[n] = fib(n - 1) + fib(n - 2);
        }

        return cache[n];
    }
};
