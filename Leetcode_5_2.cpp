// Longest Palindromic Substring

#include "leetcode.h"

// 动态规划
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() < 2) return s;

        vector<vector<bool>> dp(s.size());
        for(int i = 0; i < dp.size(); i++)
            dp[i].resize(s.size());

        int start = 0, maxlen = 1;
        for(int i = 0; i < s.size(); i++)
            dp[i][i] = true;
        for(int i = 0; i < s.size() - 1; i++) {
            dp[i][i + 1] = (s[i] == s[i + 1]);
            if (dp[i][i + 1]) {
                start = i;
                maxlen = 2;
            }
        }
            
        for(int gap = 2; gap < s.size(); gap++)
            for(int i = 0; i + gap < s.size(); i++) {
                dp[i][i + gap] = (dp[i + 1][i + gap - 1] && s[i] == s[i + gap]);
                if (dp[i][i + gap] && (gap + 1) > maxlen) {
                    start = i;
                    maxlen = gap + 1;
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
