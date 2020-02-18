// String to Integer atoi

#include "leetcode.h"

#define intMax 2147483647
#define intMin -2147483648

class Solution {
private:
	int getMin(int &a, int &b) {
		return a < b ?  a : b;
	}
	bool isNumber(char &x){
		return (48 <= (int)x && (int)x <= 57 ? true : false);
	}
public:
    int myAtoi(string str) {
        int len = str.length();
		set<char> numbers {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

		int left = len;
		int flagNagtive = false;
		for(int i = 0; i < len; i++)
		{
			if (str[i] == ' ') continue;
			if (str[i] == '+' && isNumber(str[i + 1])){
				left = i + 1;
				break;
			}
			if (str[i] == '-' && isNumber(str[i + 1])){
				left = i + 1;
				flagNagtive = true;
				break;
			}
			if (isNumber(str[i])) {
                left = i;
                break;
            }
			if (!isNumber(str[i])) {
                return 0;
            }
		}

		int right = left;
		while(isNumber(str[right]))
			right++;
		string strnum = str.substr(left, right - left);
        
		long long ans = 0;

		for(int i = 0; i < strnum.size(); i++){
			ans = ans * 10 + (int)(strnum[i] - 48);
			if (!flagNagtive && ans > intMax) {
				return intMax;
			}
			if (flagNagtive && -ans < intMin) {
				return intMin;
			}
		}

		return (flagNagtive ? -ans : ans);
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
