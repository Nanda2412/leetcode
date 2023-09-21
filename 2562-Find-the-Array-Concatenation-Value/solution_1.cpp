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

            result += stoi(to_string(dq.front()) + to_string(dq.back()));

            dq.pop_front();
            dq.pop_back();
        }

        return result;
    }
};
