// Container With Most Water

#include "leetcode.h"

#define sz(c)			(int)(c).size()
#define forall(i,a,b)	for(int i=a;i<(b);++i)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = sz(height);
        int maxVol = 0;
        forall(i, 0, n){
            if(height[i] * (n - 1) <= maxVol) continue;
            forall(j, i + 1, n)
                if(min(height[i], height[j]) * (j - i) > maxVol)
                    maxVol = min(height[i], height[j]) * (j - i);
        }

        return maxVol;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
