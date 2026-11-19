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

        ListNode* dummy = new ListNode(0);

        dummy->next = head; //	沒有dummy node 需要額外處理刪除 head
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        // fast 先走 n + 1 步
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }
        // fast 和 slow 一起移動
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* temp = slow->next; //slow->next停在要刪除的地方
        slow->next = slow->next->next;
        delete temp;
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};