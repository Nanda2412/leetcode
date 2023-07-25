class Solution {
public:
    string interpret(string command) {
        while(command.find("()") != string::npos) command.replace(command.find("()"), 2, "o");
        while(command.find("(al)") != string::npos) command.replace(command.find("(al)"), 4, "al");
        return command;
    }
};
