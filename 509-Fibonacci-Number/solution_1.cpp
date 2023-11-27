class Solution {
public:
    int fib(int n) {
        unordered_map<int, int> cache {{0, 0}, {1, 1}};

        if(n < 2) return cache[n];

        auto curr = 2;
        while(curr <= n) {
            cache[curr] = cache[curr - 1] + cache[curr - 2];
            ++curr;
        }

        return cache[n];
    }
};
