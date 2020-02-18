// Two Sum IV Input is a BST

#include <leetcode.h>

static int x = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return NULL;
}();

class Solution {
public:
	vector<int> nums;

	void dg(TreeNode* root) {
		if (NULL != root->left) {
			dg(root->left);
		}
		nums.push_back(root->val);
		if (NULL != root->right) {
			dg(root->right);
		}
	}

    bool findTarget(TreeNode* root, int target) {
        dg(root);

		int i = 0, j = nums.size() - 1;

		int sum;

		while(i < j){
			sum = nums[i] + nums[j];
			if(sum == target)
				return true;

			if(sum < target)
				i++;
			else
				j--;
		}

		return false;
    }
};