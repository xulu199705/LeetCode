// Roman to Integer

#include "leetcode.h"

class Solution {
public:
    int romanToInt(string s) {
        const map<string, int> mapRoman = {
            map<string, int>::value_type("I", 1),
            map<string, int>::value_type("VI", 4),
            map<string, int>::value_type("V", 5),
            map<string, int>::value_type("IX", 9),
            map<string, int>::value_type("X", 10),
            map<string, int>::value_type("XL", 40),
            map<string, int>::value_type("L", 50),
            map<string, int>::value_type("XC", 90),
            map<string, int>::value_type("C", 100),
            map<string, int>::value_type("CD", 400),
            map<string, int>::value_type("D", 500),
            map<string, int>::value_type("CM", 900),
            map<string, int>::value_type("M", 1000),
        };
        const map<string, int>::iterator iter;
        
        int res = 0;
        string tmp = "";
        while(s != ""){
            tmp = (s.size() >= 2 ? s.substr(0,2) : s.substr(0,1));
            iter = mapRoman.find(tmp);

            if(iter != mapRoman.end()){
                res += iter->second;
                s = s.substr(tmp.size(), s.size() - tmp.size());
            }
            else{
                tmp = s.substr(0, 1);
                res += mapRoman.find(tmp)->second;
                s = s.substr(tmp.size(), s.size() - tmp.size());
            }
        }

        return res;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
