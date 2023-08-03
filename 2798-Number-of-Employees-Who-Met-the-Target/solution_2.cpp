class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        auto count = count_if(hours.begin(), hours.end(), [&](const auto& hour) {
            return hour >= target;
        });

        return count;
    }
};
