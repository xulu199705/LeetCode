// Two Sum II Input array is sorted

#include <leetcode.h>

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;

        for (int i = 0; i < numbers.size(); i++)
        {
			if (i != 0 && numbers[i] == numbers[i-1]) {
				continue;
			}

			if (numbers[i] > target) {
				break;
			}

			if (numbers.end() != find(numbers.begin() + i + 1, numbers.end(), target - numbers[i])) {
				for (int j = i + 1; j < numbers.size(); j++)
				{
					if (numbers[i] + numbers[j] == target) {
						ans.push_back(i + 1);
						ans.push_back(j + 1);
						return ans;
					}
				}
			}
        }
        return ans;
    }
};