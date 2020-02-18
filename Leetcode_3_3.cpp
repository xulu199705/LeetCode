// Longest Substring Without Repeating Characters

#include "leetcode.h"

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() < 2) return s.length();

        int start = -1, sublen = 1, i = 0;;
        int a[128] = {0};
        a[s[0]]++;
        while(i < (s.length() - 1)){
            i++;
            a[s[i]]++;
            while(a[s[i]] > 1){
                start++;
                a[s[start]]--;
            }
            sublen = (sublen < (i - start) ? (i - start) : sublen);
        }

        return sublen;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
