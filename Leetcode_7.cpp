// Reverse Integer

#include <leetcode.h>

class Solution {
public:
    int reverse(int x) {
        long long ans = 0; ans = 0;
		while(0 != x){
			ans = ans * 10 + x % 10;
			if (ans < -2147483648 || ans > 2147483647) {
				return 0;
			}
			
			x = x / 10;
		}
		
		return ans;
    }
};