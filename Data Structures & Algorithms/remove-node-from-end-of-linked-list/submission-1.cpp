/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0;
        ListNode* cur = head;
        while (cur != nullptr){
            sz++;
            cur = cur->next;
        }
        if (n > sz) return head;
        if (sz == 1 && n == 1){
            delete head;
            return nullptr;
        }
        cur = head;
        if (n == sz){
            ListNode* t = head;
            head = head->next;
            delete t;
            return head;
        }
        for (int i = 0; i < sz - n - 1; i++){
            cur = cur->next;
        }
        ListNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp; 
        return head;
    }
};
