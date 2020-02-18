// Roman to Integer

#include "leetcode.h"

#define intmax			INT_MAX
class Solution {
public:
    int romanToInt(string s) {
        int res = 0, last = intmax;

        for(char c : s){
            int cur;
            switch(c){
                case 'M' : cur = 1000; break;
                case 'D' : cur = 500; break;
                case 'C' : cur = 100; break;
                case 'L' : cur = 50; break;
                case 'X' : cur = 10; break;
                case 'V' : cur = 5; break;
                case 'I' : cur = 1; break;
            }

            res += cur;
            if(cur > last) res -= 2 * last;
            last = cur;
        }

        return res;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
