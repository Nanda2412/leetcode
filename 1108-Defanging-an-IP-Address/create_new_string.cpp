class Solution {
public:
    string defangIPaddr(string address) {
       string result;
       for(const auto& c : address) {
           if(c != '.') {
               result += c;
           } else{
               result += "[.]";
           }
       }

       return result;
    }
};
