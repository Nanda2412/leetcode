class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> cache;

        for(const auto& num : arr) {
            if(cache.count(2 * num) || (num % 2 == 0 && cache.count(num/2))) {
                return true;
            }

            cache.emplace(num);
        }

        return false;
    }
};
