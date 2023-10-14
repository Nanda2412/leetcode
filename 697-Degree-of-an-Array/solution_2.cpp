class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        vector<pair<int, int>> numsWithIds(nums.size());

        int idx = 0;
        for (const auto& num : nums) {
            numsWithIds[idx] = make_pair(num, idx);
            ++idx;
        }

        sort(numsWithIds.begin(), numsWithIds.end());

        int currNum = -1, currCount = 0, degree = 0, startIdx = -1, result = 0;
        for(const auto& numWithId : numsWithIds) {
            currCount = numWithId.first == currNum ? currCount + 1 : 1;
            if(currCount == 1) startIdx = numWithId.second;
            if(currCount > degree) {
                degree = currCount;
                result = numWithId.second - startIdx + 1;
            } else if(currCount == degree) {
                result = min(result, numWithId.second - startIdx + 1);
            }

            currNum = numWithId.first;
        }

        return result;
    }
};
