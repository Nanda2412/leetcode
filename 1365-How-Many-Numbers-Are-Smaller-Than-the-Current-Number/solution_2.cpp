class Solution {
    struct IndexLocator{
        int num, idx;

        bool operator<(const IndexLocator& other) const {
            return num < other.num;
        }
    };
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<IndexLocator> locators;
        for(int i = 0; i < nums.size(); ++i) {
            locators.emplace_back(IndexLocator{nums[i], i});
        }

        sort(locators.begin(), locators.end());
        vector<int> result(nums.size(), 0);

        result[locators[0].idx] = 0;
        for(int i = 1; i < locators.size(); ++i) {
            if(locators[i].num == locators[i-1].num) {
                result[locators[i].idx] = result[locators[i-1].idx];
            } else {
                result[locators[i].idx] = i;
            }
        }

        return result;
    }
};
