class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        const auto is_even = [](const int& a) {
            return a % 2 == 0;
        };
        auto iter = find_if(nums.begin(), nums.end(), is_even);

        if(iter == nums.end()) return -1;
    
        auto prevMaxCount = 0, currCount = 0, currElem = numeric_limits<int>::min(), result = -1;

        const auto update_result =[&]() {
            if(currCount > prevMaxCount) {
                result = currElem;
                prevMaxCount = currCount;
            }
        };

        for(auto it = iter; it != nums.end(); ++it) {
            if(is_even(*it)) {
                currCount = *it == currElem ? currCount + 1 : 1;
                currElem = *it;
                update_result();
            }
        }

        return result;
    }
};
