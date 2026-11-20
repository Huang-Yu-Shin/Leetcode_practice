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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* resultpoint = &dummy;

        while (list1 != nullptr && list2 != nullptr){
            if (list1->val<list2->val){
                resultpoint->next = list1;
                list1 = list1->next;
            }
            else {
                resultpoint->next = list2;
                list2 = list2->next;
            }
            resultpoint = resultpoint->next; //注意要宣告移動到下一個node
        }
        if (list1 != nullptr) { //有一行已經走完了就將其街道另一行
            resultpoint->next = list1;
        }
        else {
            resultpoint->next = list2;
        }

        return  dummy.next;//注意是dummy的next
    }
};