class Solution {
    int maxDigit(int num) {
        int result = numeric_limits<int>::min();
        while(num) {
            int lsd = num % 10;
            result = max(result, lsd);
            num /= 10;
        }

        return result;
    }
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int> maxDigitMap;
        int result = numeric_limits<int>::min();

        for(const auto& num : nums) {
            const int& max_digit = maxDigit(num);

            if(maxDigitMap.count(max_digit)) {
                result = max(result, num + maxDigitMap[max_digit]);
                maxDigitMap[max_digit] = max(num, maxDigitMap[max_digit]);
            } else {
                maxDigitMap[max_digit] = num;
            }
        }

        return result == numeric_limits<int>::min() ? -1 : result;
    }
};
