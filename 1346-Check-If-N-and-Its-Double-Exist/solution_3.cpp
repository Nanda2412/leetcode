class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        if(ranges::count(arr, 0) >= 2) return true;
        ranges::sort(arr);
        for(const auto& num : arr) {
            if(num == 0) continue;
            const auto l_iter = lower_bound(arr.begin(), arr.end(), 2 * num);
            if(l_iter == arr.end()) continue;
            if(*l_iter == 2 * num) return true;

        }

        return false;
    }
};
