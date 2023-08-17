class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer–Moore majority vote algorithm
        int result = 0, counter = 0;

        for(const auto& num : nums) {
            if(!counter) {
                result = num, counter = 1;
            } else {
                result == num ? ++counter : --counter;
            }
        }

        return result;
    }
};
