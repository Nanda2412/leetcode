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
    void AppendNode(ListNode** node, ListNode** tail) {
        (*tail)->next = *node;
        *tail = *node;
        *node = (*node)->next;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy_head = new ListNode();
        auto* tail = dummy_head;

        while(list1 && list2) {
            AppendNode(list1->val <= list2->val ? &list1 : &list2, &tail);
        }

        tail->next = list1 ? list1 : list2;
        return dummy_head->next;
    }
};
