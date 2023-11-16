class Solution {
    bool kConsecutiveOdds(vector<int>& arr, int k) {
        if(arr.size() < k) return false;

        for(int i = 0; i <= arr.size() - k; ++i) {
            if(!(arr[i] & 1)) continue;

            int count = 1;
            for(int j = i + 1; j < i + k; ++j) {
                count += arr[j] & 1;
            }

            if(count == k) return true;
        }

        return false;
    }
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        return kConsecutiveOdds(arr, 3);
    }
};
