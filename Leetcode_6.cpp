// ZigZag Conversion

#include "leetcode.h"

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        int t = 2 * (numRows - 1);

        string res = "";

        int i = 0;
        while(i < s.size()){
            res += s[i];
            i += t;
        }
        
        int j;
        for(int g = 1; g < numRows - 1; g++)
        {
            i = g;
            j = t - g;

            while(i < s.size()){
                res += s[i];
                i += t;

                if (j >= s.size()) continue;
                res += s[j];
                j += t;
            }
        }

        i = numRows - 1;
        while(i < s.size()){
            res += s[i];
            i += t;
        }

        return res;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
