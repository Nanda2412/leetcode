class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());
        auto first = pq.top(); pq.pop();
        auto second = pq.top();

        return --first * --second;
    }
};
