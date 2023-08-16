class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        deque<int> dq1(nums.begin(), nums.begin() + n);
        deque<int> dq2(nums.begin() + n, nums.end());
        
        int i = 0;
        while(!dq1.empty() && !dq2.empty()) {
            nums[i++] = dq1.front(), dq1.pop_front();
            nums[i++] = dq2.front(), dq2.pop_front();
        }

        return nums;
    }
};
