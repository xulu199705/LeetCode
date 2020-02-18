// Palindrome Linked List

#include "leetcode.h"

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // count the listnode
        int n = 0;
        auto cur = head;
        while(cur){
            n++;
            cur = cur->next;
        }

        // null or single digit is palindrome
        if(n < 2) return true;

        // find the middle of listnode before reversion
        auto tail = head;
        if(0 == n % 2)
            for(int i = 0; i < n / 2; i++) tail = tail->next;
        else
            for(int i = 0; i < n / 2 + 1; i++) tail = tail->next;
        
        // reverse the left part of the listnode
        cur = head;
        ListNode * prv = nullptr;
        int j = n / 2;
        while(cur && j--){
            auto tmp = cur->next;
            cur->next = prv;
            prv = cur;
            cur = tmp;
        }

        // compare the two half
        while(prv && tail){
            if(prv->val == tail->val){
                prv = prv->next;
                tail = tail->next;
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
