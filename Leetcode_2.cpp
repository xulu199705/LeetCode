// Add Two Numbers

#include <leetcode.h>

static const auto speedup = []() {std::ios::sync_with_stdio(false); std::cin.tie(NULL); return 0; }();

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum, carry = 1;
		ListNode* ans = new ListNode(0);
		ListNode* res = ans;

		sum = l1->val + l2->val;
		while(true){
			carry = sum / 10;
			sum = sum % 10;
			ans->next = new ListNode(sum);
       		ans = ans->next;
			
			sum = carry;
            if (NULL == l1->next && NULL == l2->next && 0 == carry) {
                break;
            }
			if (NULL != l1->next) {
				l1 = l1->next;
				sum = sum + l1->val;
			}
			if (NULL != l2->next) {
				l2 = l2->next;
				sum = sum + l2->val;
			}
		}

		ans = res->next;
		delete res;
		return ans;
    }
};