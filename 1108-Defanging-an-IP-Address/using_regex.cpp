class Solution {
public:
    string defangIPaddr(string address) {
        regex period("[.]");
        return regex_replace(address, period, "[.]");
    }
};
