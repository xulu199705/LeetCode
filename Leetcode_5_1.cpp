// Longest Palindromic Substring

#include "leetcode.h"

// Manachar
class Solution {
public:
    string longestPalindrome(string s) {
        // build the new string
        string manastr = "$#";
        for (int i = 0; i < s.size(); i++) {
            manastr  = manastr + s[i] + "#";
        }

        int pos = 0, mx = 0;
        int start = 0, maxlen = 0;
        vector<int> rd(manastr.size(), 0);
        for (int i = 1; i < manastr.size(); i++) {
            rd[i] = i < mx ? min(rd[2 * pos - i], mx - i) : 1;
            while(i + rd[i] < manastr.size() && i - rd[i] > 0 && manastr[i + rd[i]] == manastr[i - rd[i]])
                rd[i]++;
               
            if (i + rd[i] > mx) {
                pos = i;
                mx = i + rd[i];
            }
            if (rd[i] - 1 > maxlen) {
                start = (i - rd[i]) / 2;
                maxlen = rd[i] - 1;
            }
        }
        
        return s.substr(start, maxlen);
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
