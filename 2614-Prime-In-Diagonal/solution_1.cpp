class Solution {
    bool isPrime(int n) {
        if(n == 0 || n == 1) return false;

        for(int p = 2; p * p <= n; ++p) {
            if(n % p == 0) return false;
        }

        return true;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int result = 0, i = 0;
        while(i < nums.size()) {
            int num1 = nums[i][i];
            int num2 = nums[i][nums.size() - i - 1];
            
            if(isPrime(num1)) {
                result = max(result, num1);
            }

            if(num1 != num2 && isPrime(num2)) {
                result = max(result, num2);
            }

            ++i;
        }

        return result;
    }
};
