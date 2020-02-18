// 3Sum

#include "leetcode.h"

#define sumofnums (nums[i] + nums[l] + nums[r])
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 3) return res;

        sort(nums.begin(), nums.end());

        vector<int> tmp;
        for(int i = 0; i < nums.size() - 2; i++)
        {
            int l = i + 1, r = nums.size() - 1;
            while(l < r){
                if(0 == sumofnums){
                    tmp.clear();
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[l]);
                    tmp.push_back(nums[r]);

                    int j;
                    for(j = 0; j < res.size(); j++)
                        if(tmp == res[j]) break;
                    if(j == res.size())
                        res.push_back(tmp);
                    l++;
                    r--;
                }

                while(sumofnums < 0 && l < r) l++;
                while(sumofnums > 0 && l < r) r--;
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
