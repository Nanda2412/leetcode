class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int result = 0;
        
        const int _size = nums.size();
        for(int i = 1; i * i <= _size; ++i) {
            if(_size % i == 0) {
                result += nums[i - 1] * nums[i - 1];
                if(_size/i != i) result += nums[_size/i - 1] * nums[_size/i - 1];
            }
        }

        return result;
    }
};
