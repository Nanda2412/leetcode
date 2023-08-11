class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        const static auto helper = [&](auto& num) {
            const int num_digits = static_cast<int>(floor(log10(num))) + 1;
            int msd_mask = static_cast<int>(pow(10, num_digits - 1));

            while(msd_mask) {
                result.emplace_back(num/msd_mask);
                num %= msd_mask;
                msd_mask /= 10;
            }

            return result;
        };

        for_each(nums.begin(), nums.end(), helper);
        return result;
    }
};
