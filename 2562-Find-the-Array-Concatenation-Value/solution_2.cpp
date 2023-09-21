class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long result = 0;
        deque<int> dq(nums.begin(), nums.end());

        while(!dq.empty()) {
            if(dq.size() == 1) {
                result += dq.back();
                break;
            }
            const auto num_digits = floor(log10(dq.back())) + 1;
            const auto pow10 = pow(10, num_digits);
            result += dq.front() * pow10 + dq.back();

            dq.pop_front();
            dq.pop_back();
        }

        return result;
    }
};
