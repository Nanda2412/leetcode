class NumArray {
public:
    
    NumArray(vector<int>& nums) {
        inclusive_scan(nums.begin(), nums.end(), back_inserter(_prefixSumArray));
    }
    
    int sumRange(int left, int right) {
        return left > 0 ? _prefixSumArray[right] - _prefixSumArray[left - 1] : _prefixSumArray[right];
    }
private:
    vector<int> _prefixSumArray;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
