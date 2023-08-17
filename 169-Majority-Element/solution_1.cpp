class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> countMap;

        for(const auto& num : nums) {
            ++countMap[num];
        }

        const auto& it = find_if(countMap.begin(), countMap.end(), [&](const auto&p) {
            return p.second > (nums.size()/2);
        });

        return it->first;
    }
};
