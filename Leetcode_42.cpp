// Container With Most Water

#include "leetcode.h"

class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0, tmp, i, j, k;
        vector<int> water(height.size(), 0);
        for(i = 0; i < height.size(); i++){
            for(j = i + 1; j < height.size() && height[j] < height[i]; j++);
            if(j != height.size())
                for(k = i; k <= j; k++)
                    water[k] = max(height[i] - height[k], water[k]);
            
            for(j = i - 1; j >=0 && height[j] < height[i]; j--);
            if(j >=0)
                for(k = i; k >= j; k--)
                    water[k] = max(height[i] - height[k], water[k]);

        }

        for(i = 0; i < water.size(); i++){
            cout << water[i] << " ";
            sum += water[i];
        }
        cout << endl;
        return sum;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
