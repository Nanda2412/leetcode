class Solution {
template<typename Compare>
int PartitionAroundPivot(int left, int right, int pivot_idx, Compare comp, vector<int>& uniqueNums) {
    int pivot_value = uniqueNums[pivot_idx];
    swap(uniqueNums[pivot_idx], uniqueNums[right]);
    int new_pivot_idx = left;
    for(int i = left; i < right; ++i) {
        if(comp(uniqueNums[i], pivot_value)) {
            swap(uniqueNums[i], uniqueNums[new_pivot_idx++]);
        }
    }

    swap(uniqueNums[right], uniqueNums[new_pivot_idx]);
    return new_pivot_idx;
}

template<typename Compare>
int FindKth(int k, Compare comp, vector<int>& uniqueNums) {
    int max = *max_element(uniqueNums.begin(), uniqueNums.end());
    int left = 0, right = uniqueNums.size() - 1;
    default_random_engine gen((random_device())());

    while(left <= right) {
        int pivot_idx = uniform_int_distribution<int>{left, right}(gen);
        int new_pivot_idx = PartitionAroundPivot(left, right, pivot_idx, comp, uniqueNums);
        if(new_pivot_idx == k - 1) {
            return uniqueNums[new_pivot_idx]; 
        } else if(new_pivot_idx > k - 1) {
            right = new_pivot_idx - 1;
        } else {
            left = new_pivot_idx + 1;
        }
    }

    return max;
}

public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> numsSet(nums.begin(), nums.end());
        vector<int> uniqueNums(numsSet.begin(), numsSet.end());
        
        return FindKth(3, greater<int>(), uniqueNums);
    }
};
