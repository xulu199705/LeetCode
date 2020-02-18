// Longest Substring Without Repeating Characters

#include "leetcode.h"

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        int sublen = 1, i = 0;
        set<char> sub;
        set<char>::iterator it;

        while(i + sublen - 1 < length){
            int t = 0;
            sub.clear();
            while((i + t) < length && sub.find(s[i + t]) == sub.end()){
                sub.insert(s[i + t]);
                t++;
            }
            for(it=sub.begin(); it!=sub.end(); it++){
                cout << *it;
            }
            cout << endl;
            sublen = t < sublen ? sublen : t;

            i = i + 1;
        }

        return sublen;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
