// Longest Common Prefix

#include "leetcode.h"

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        if(strs.size() == 1) return strs[0];
        sort(strs.begin(), strs.end());

        string str = strs[0];
        if(str == "") return "";
        for(int i = 1; i <= str.size(); i++){
            string tmp = str.substr(0, i);
            for(int j = 1; j < strs.size(); j++)
                if(strs[j].find(tmp) != 0)
                    return tmp.substr(0, tmp.size() - 1);
        }

        return str;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
