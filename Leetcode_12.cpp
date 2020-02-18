// Integer to Roman

#include "leetcode.h"

class Solution {
private:
    const string romanList[4][10] = 
        {{"","I","II","III","IV","V","VI","VII","VIII","IX"},
        {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
        {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
        {"","M","MM","MMM","","","","","",""}};
public:
    string intToRoman(int num) {
        string res = "";
        int i = 0;
        while(num){
            res = romanList[i][num % 10] + res;
            i++;
            num = num / 10;
        }
        return res;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
