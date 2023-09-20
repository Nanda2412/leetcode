class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long result = 0;
        deque<int> dq(nums.begin(), nums.end());

        while(!dq.empty() && dq.size() >= 2) {
            result += stoi(to_string(dq.front()) + to_string(dq.back()));

            dq.pop_front();
            dq.pop_back();
        }

        if(!dq.empty())
            result += dq.back();
        return result;
    }
};
