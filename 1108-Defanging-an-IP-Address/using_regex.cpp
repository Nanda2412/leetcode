class Solution {
public:
    string defangIPaddr(string address) {
        regex period("[.]");
        return std::regex_replace(address, period, "[.]");
    }
};
