class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int> points;
        for(const auto& num : nums) {
            for(int i = num[0]; i <= num[1]; ++i) {
                if(!points.count(i)) points.emplace(i);
            }
        }

        return points.size();
    }
};
