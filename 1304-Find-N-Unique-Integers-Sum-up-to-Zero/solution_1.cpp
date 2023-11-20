class Solution {
public:
    vector<int> sumZero(int n) {
        if(n == 1) return vector<int>{0};

        vector<int> result;
        
        int limit = n/2;
        for(int i = 1; i <= limit; ++i) {
            result.emplace_back(i);
            result.emplace_back(-1 * i);
        }

        if(n & 1) result.emplace_back(0);

        return result;
    }
};
