class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        const auto getDuration = [](int hrs, int mins){
            return chrono::hours{hrs} + chrono::minutes{mins};
        };
        const auto event1_start_time = getDuration(stoi(event1[0].substr(0,2)), stoi(event1[0].substr(3)));
        const auto event1_end_time = getDuration(stoi(event1[1].substr(0,2)), stoi(event1[1].substr(3)));
        const auto event2_start_time = getDuration(stoi(event2[0].substr(0,2)), stoi(event2[0].substr(3)));
        const auto event2_end_time = getDuration(stoi(event2[1].substr(0,2)), stoi(event2[1].substr(3)));

        return event1_start_time < event2_start_time ? event2_start_time <= event1_end_time : event1_start_time <= event2_end_time;
    }
};
