class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> indices;
        int i = 0;
        ranges::for_each(nums, [&](auto& num) {
            if(num) indices.emplace_back(i);
            ++i;
        });

        vector<int> diff;
        adjacent_difference(indices.begin(), indices.end(), back_inserter(diff));

        if(diff.empty()) return true;

        return all_of(diff.begin() + 1, diff.end(), [&](const auto& val) {
            return val - 1 >= k; 
        });

    }
};
