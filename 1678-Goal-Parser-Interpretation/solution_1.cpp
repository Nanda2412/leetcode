class Solution {
public:
    string interpret(string command) {
        string result;
        for(int i = 0; i < command.size(); ++i) {
            if(command[i] == 'G') {
                result += command[i];
            } else if(command[i] == '(') {
                result += command[i + 1] == ')' ? "o" : "al";
            }
        }

        return result;
    }
};
