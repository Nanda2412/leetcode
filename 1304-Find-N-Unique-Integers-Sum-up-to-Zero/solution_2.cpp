class Solution {
public:
    vector<int> sumZero(int n) {
        if(n == 1) return vector<int>{0};
        if(n == 2) return vector<int>{-1, 1};

        vector<int> result{1, 2};

        for(int i = 3; i < n; ++i) {
            result.emplace_back(i);
        }

        result.emplace_back(-1*((result.back() * (result.back() + 1))/ 2));

        return result;
    }
};
