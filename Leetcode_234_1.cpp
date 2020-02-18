// Palindrome Linked List

#include "leetcode.h"

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string str = "";
        while(NULL != head){
            str += (char)(head->val + '0');
            head = head->next;
        }
        string str_rev = str;
        reverse(str_rev.begin(),str_rev.end());
        return (str == str_rev ? true : false);
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
