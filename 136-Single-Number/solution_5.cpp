// range-based for loop
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int result = 0;

       for(const auto& num : nums) {
           result ^= num;
       }

       return result;
    }
};

// for_each
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        
        const auto XOR = [&](const auto& num) {
            result ^= num;
        };

        for_each(nums.cbegin(), nums.cend(), XOR);

        return result;
    }
};

// C++20 ranges library for_each
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        
        const auto XOR = [&](const auto& num) {
            result ^= num;
        };

        ranges::for_each(nums, XOR);

        return result;
    }
};
