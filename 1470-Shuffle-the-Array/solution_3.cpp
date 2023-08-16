class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        deque<int> dq(nums.begin() + n, nums.end());

        for(int i = n - 1; i > 0; --i) {
            nums[i * 2] = nums[i];
        }

        int i = 1;
        while(!dq.empty()) {
            nums[i] = dq.front(), dq.pop_front();
            i += 2;
        }

        return nums;
    }
};
