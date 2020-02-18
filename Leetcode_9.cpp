// Palindrome Number

#include "leetcode.h"

class Solution {
public:
    bool isPalindrome(int x) {
        string str = std::to_string(x);
        string str_rev = str;
        reverse(str_rev.begin(),str_rev.end());
        return (str == str_rev ? true : false);
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
