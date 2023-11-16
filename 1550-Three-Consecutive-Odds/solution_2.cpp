class Solution {
    bool kConsecutiveOdds(vector<int>& arr, int k) {
        if(arr.size() < k) return false;

        int count = 0;
        for(int i = 0; i < arr.size(); ++i) {
            count = arr[i] & 1 ? count + 1 : 0;

            if(count == k) return true;
        }

        return false;
    }
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        return kConsecutiveOdds(arr, 3);
    }
};
