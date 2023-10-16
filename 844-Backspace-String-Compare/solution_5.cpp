class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // iterating backwords and keeping track of characters
        // to compare and number ofbackspaces('#)
        int sCursor = s.size() - 1;
        int tCursor = t.size() - 1;

        int sBackSpaces = 0;
        int tBackSpaces = 0;

        while(true) {
            if(sCursor >= 0 && s[sCursor] == '#') {
                ++sBackSpaces;
                --sCursor;
                continue;
            }

            if(tCursor >= 0 && t[tCursor] == '#') {
                ++tBackSpaces;
                --tCursor;
                continue;
            }

            if(sCursor >=0 && sBackSpaces > 0) {
                --sBackSpaces;
                --sCursor;
                continue;
            }

            if(tCursor >= 0 && tBackSpaces > 0) {
                --tBackSpaces;
                --tCursor;
                continue;
            }

            // exhaust together, return true
            if(sCursor < 0 && tCursor < 0) {
                return true;
            }

            // one finishes before the other, return false
            if(sCursor < 0 || tCursor < 0) {
                return false;
            }

            // characters do not compare equal, return false
            if(s[sCursor] != t[tCursor]) {
                return false;
            }

            --sCursor;
            --tCursor;
        }
    }
};
