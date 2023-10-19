class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size(), -1);

        unordered_map<int, int> indexMap;

        for(int i = 0; i < nums2.size(); ++i) {
            indexMap[nums2[i]] = i;
        }

        for(int i = 0; i < nums1.size(); ++i) {
            for(int j = indexMap[nums1[i]] + 1; j < nums2.size(); ++j) {
                if(nums2[j] > nums1[i]) {
                    result[i] = nums2[j];
                    break;
                }
            }
        }

        return result;
    }
};
