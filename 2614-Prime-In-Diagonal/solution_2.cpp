class Solution {
    deque<bool> is_prime;
    void preCalculatePrimes(int _max) {
        fill_n(back_inserter(is_prime), _max + 1, true);
        is_prime[0] = is_prime[1] = false;
        for(int p = 2; p <= sqrt(_max); ++p) {
            if(is_prime[p]) {
                for(int j = p * p; j <= _max; j += p) {
                    is_prime[j] = false;
                }
            }
        }
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int _max = 0;
        for(const auto& row : nums) {
            _max = max(_max, *max_element(row.begin(), row.end()));
        }

        preCalculatePrimes(_max);

        int result = 0, i = 0;        
        while(i < nums.size()) {
            int num1 = nums[i][i];
            int num2 = nums[i][nums.size() - i - 1];

            if(is_prime[num1]) {
                result = max(result, num1);
            }

            if(num1 != num2 && is_prime[num2]) {
                result = max(result, num2);
            }

            ++i;
        }

        return result;
    }
};
