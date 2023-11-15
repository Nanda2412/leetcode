class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        for(size_t i = 0; i < arr.size(); ++i) {
            for(size_t j = i + 1; j < arr.size(); ++j) {
                if(arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) return true;
            }
        }

        return false;
    }
};
