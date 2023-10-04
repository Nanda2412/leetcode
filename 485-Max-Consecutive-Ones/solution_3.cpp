class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        stringstream ss;
        for(const auto& num : nums) {
            ss << num;
        }
        string s = ss.str();

        int maxCount = 0;
        size_t start = 0, end;
        
        while((end = s.find('0', start )) != string::npos) {
            maxCount = max(maxCount, static_cast<int>(end - start));
            start = end + 1;
        }

        maxCount = max(maxCount, static_cast<int>(s.size() - start));

        return maxCount;
    }
};
