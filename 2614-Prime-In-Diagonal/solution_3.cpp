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

        int diagonalMax = 0, row = 0;
        set<int> diagonalNums;       
        while(row < nums.size()) {
            int num1 = nums[row][row];
            int num2 = nums[row][nums.size() - row - 1];

            diagonalMax = max(diagonalMax, max(num1, num2));
            diagonalNums.emplace(num1), diagonalNums.emplace(num2);
            ++row;
        }

        preCalculatePrimes(diagonalMax);

        int result = 0;
        for(auto iter = diagonalNums.rbegin(); iter != diagonalNums.rend(); ++iter) {
            if(is_prime[*iter]) {
                result = *iter;
                break;
            }
        }

        return result;
    }
};
