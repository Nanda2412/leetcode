class Solution {
public:
    string defangIPaddr(string address) {
        size_t start = 0, end;
        while((end = address.find(".", start)) != string::npos) {
            address.replace(end, 1, "[.]");
            start = end + 2;
        }

        return address;
    }
};
