class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int sum1 = 0, sum2 = 0, idx = 0;

        for(const auto& word : word1) {
            for(const auto& c : word) {
                sum1 += idx++ * c;
            }
        }

        idx = 0;
        for(const auto& word : word2) {
            for(const auto& c : word) {
                sum2 += idx++ * c;
            }
        }

        if(!sum1 && !sum2) return word1.front() == word2.front();

        return sum1 == sum2;
        
    }
};
