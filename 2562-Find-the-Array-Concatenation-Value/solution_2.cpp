class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long result = 0;
        deque<int> dq(nums.begin(), nums.end());

        while(!dq.empty() && dq.size() >= 2) {
            const auto num_digits = static_cast<int>(floor(log10(dq.back()))) + 1;
            const auto pow10 = static_cast<int>(pow(10, num_digits));
            result += dq.front() * pow10 + dq.back();

            dq.pop_front();
            dq.pop_back();
        }

        if(!dq.empty())
            result += dq.back();
        return result;
    }
};
