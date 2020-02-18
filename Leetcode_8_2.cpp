// String to Integer atoi

#include "leetcode.h"

class Solution {
public:
    int myAtoi(string str) {
        long long res = 0;
        long long sign = 1; // positive

        int i = str.find_first_not_of(' ');
        if (i == std::string::npos) return 0;
        if ('-' == str[i] || '+' == str[i])
            sign = (str[i++] == '+' ? 1 : -1);
        
        while('0' <= str[i] && str[i] <= '9'){
            res = res * 10 + (str[i++] - '0');
            if (sign > 0 && res >= INT_MAX) return INT_MAX;
            if (sign < 0 && res > INT_MAX) return INT_MIN;
        }

        return sign * res;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
