// Range Sum of BST

#include "leetcode.h"

class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
		return (NULL == root ?
			0 :
			(root->val < L ?
			rangeSumBST(root->right, L, R) :
			(root->val >R ?
			rangeSumBST(root->left, L, R) :
			root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R)
			)
			)
			);
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
