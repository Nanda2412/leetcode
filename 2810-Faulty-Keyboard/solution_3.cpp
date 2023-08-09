class Solution {
public:
    string finalString(string s) {
        deque<char> dq;
        int front = 0;
        for(const auto& c : s) {
            if(c == 'i') {
                front ^= 1;
                continue;   
            }
            
            if(!front) {
                dq.emplace_back(c);
            } else{
                dq.emplace_front(c);
            }
        }

        return !front ? string(dq.begin(), dq.end()) : string(dq.rbegin(), dq.rend());
    }
};
