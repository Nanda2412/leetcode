class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        unordered_set<int> uniqueNums;
        
        for(const auto& num : nums) {
            uniqueNums.emplace(num);
            if(num > first) {
                third = second;
                second = first;
                first = num;
            } else if(num != first && num > second) {
                third = second;
                second = num;
            } else if( num != first && num != second && num > third) {
                third = num;
            }
        }

        return uniqueNums.size() < 3 ? first : third;
    }
};
