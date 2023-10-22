class NumArray {
public:
    
    NumArray(vector<int>& nums) : _internalArray(nums){
    }
    
    int sumRange(int left, int right) {
        return accumulate(_internalArray.begin() + left, _internalArray.begin() + right + 1, 0);
    }
private:
    vector<int> _internalArray;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
