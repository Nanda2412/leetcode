class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> evenCountMap;

        for(const auto& num : nums) {
            if(num % 2 == 0) {
                ++evenCountMap[num];
            }
        }

        int result = -1, prevMaxCount = 0;
        for(const auto&[num, count] : evenCountMap) {
            if(count >= prevMaxCount) {
                if(count == prevMaxCount)
                    result = min(result, num);
                else
                    result = num;
                prevMaxCount = count;
            }
        }

        return result;
    }
};
