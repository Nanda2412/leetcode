class Solution {
    int kthMax(const vector<int>& nums, int k) {
        unordered_set<int> uniqueNums(nums.begin(), nums.end());
        priority_queue<int, vector<int>, greater<>> min_heap;
        int _max = INT_MIN;

        for(const auto& num : uniqueNums) {
            _max = max(_max, num);
            min_heap.emplace(num);
            if(min_heap.size() == k + 1) min_heap.pop();
        }

        return min_heap.size() < k ? _max : min_heap.top();
    }
public:
    int thirdMax(vector<int>& nums) {
        return kthMax(nums, 3);
    }
};
