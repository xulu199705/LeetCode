// Container With Most Water

#include "leetcode.h"

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = 0;
        int i = 0, j = height.size() - 1;
        while(i < j) {
            int h = min(height[i], height[j]);
            maxVol = max(maxVol, (j - i) * h);
            while(height[i] <= h && i < j) i++;
            while(height[j] <= h && i < j) j--;
        }
        return maxVol;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
