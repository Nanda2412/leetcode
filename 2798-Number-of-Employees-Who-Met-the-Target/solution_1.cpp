class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        hours.erase(remove_if(hours.begin(), hours.end(),[&](const auto& hour) {
            return hour < target; 
        }), hours.end());

        return hours.size();
    }
};
