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
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;
        vector<ListNode*> a;
        ListNode* cur = head;
        while (cur){
            a.push_back(cur);
            cur = cur->next;
        }
        int i = 0;
        int j = a.size() - 1;
        while (i < j){
            a[i]->next = a[j];
            a[j]->next = a[i + 1];
            i++;
            j--;
        }
        a[i]->next = nullptr;
    }
};

