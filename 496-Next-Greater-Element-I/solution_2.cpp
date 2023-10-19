class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextLargest;

        for(const auto& num : nums1) {
            nextLargest[num] = -1;
        }

        stack<int> waitingForLarger;
        for(const auto& num : nums2) {
            while(!waitingForLarger.empty() && waitingForLarger.top() < num) {
                nextLargest[waitingForLarger.top()] = num;
                waitingForLarger.pop();
            }

            if(nextLargest.count(num)) {
                waitingForLarger.emplace(num);
            }
        }

        vector<int> result;
        for(const auto& num : nums1) {
            result.emplace_back(nextLargest[num]);
        }

        return result;
    }
};
