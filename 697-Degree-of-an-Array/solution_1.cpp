class Solution { 
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, set<int>> indexMap;

        int degree = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(indexMap.count(nums[i])) {
                indexMap[nums[i]].emplace(i);
            } else {
                indexMap[nums[i]] = set<int>{i};
            }

            degree = max(degree, static_cast<int>(indexMap[nums[i]].size()));
        }
        
        int result = INT_MAX;
        ranges::for_each(indexMap, [&](const auto& p){
            if(degree == p.second.size()) {
                result = min(result, *p.second.rbegin() - *p.second.begin() + 1);
            }
        });

        return result;
    }
};
