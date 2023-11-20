class Solution {
    vector<int> sumZeroUsingKPositives(int k, int n) {
        assert(k >= 1);
        assert(k <= n - 1);

        vector<int> result;
        if(k >= n/2) {
            for(int i = 1; i <= k; ++i) {
                result.emplace_back(i);
            }
        } else {
            for(int i = 1; i <= n - k; ++i) {
                result.emplace_back(-i);
            }
        }

        size_t idx = 0; 
        int j = k >= n/2 ? n - k - 1 : k - 1;
        vector<int> partial_result;
        while(j--) {
            partial_result.emplace_back(-result[idx++]);
        }

        const auto sum = accumulate(result.begin() + idx, result.end(), 0);
        result.emplace_back(-sum);
        result.insert(result.end(), partial_result.begin(), partial_result.end());
        return result;

    }
public:
    vector<int> sumZero(int n) {
        if(n == 1) return vector<int>{0};
        default_random_engine gen((random_device())());
        const auto k = uniform_int_distribution<int>{1, n - 1}(gen);
        const auto result = sumZeroUsingKPositives(k, n);
        const auto positiveCount = ranges::count_if(result, [](int num) {
            return num > 0;
        });
        assert(positiveCount == k);
        return result;
    }
};
