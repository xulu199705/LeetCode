// Longest Substring Without Repeating Characters

#include "leetcode.h"

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, sublen = 1, len = 1;

        if(s.length() < 2) return s.length();

        for(int i = 1; i < s.length(); i++){
            int newstart = -1;
            for(int check = start; check < i; check++)
                if(s[check] == s[c])
                    newstart = check;
            if(newstart >= 0){
                start = newstart + 1;
                len = i - newstart;
            }
            else{
                len = len + 1;
                sublen = (sublen < len ? len : sublen);
            }
        }

        return sublen;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
