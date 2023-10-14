class Solution { 
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, vector<int>> indexMap;

        int degree = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(indexMap.count(nums[i])) {
                indexMap[nums[i]].emplace_back(i);
            } else {
                indexMap[nums[i]] = vector<int>{i};
            }

            degree = max(degree, static_cast<int>(indexMap[nums[i]].size()));
        }
        
        int result = INT_MAX;
        ranges::for_each(indexMap, [&](const auto& p){
            if(degree == p.second.size()) {
                result = min(result, p.second.back() - p.second.front() + 1);
            }
        });

        return result;
    }
};
