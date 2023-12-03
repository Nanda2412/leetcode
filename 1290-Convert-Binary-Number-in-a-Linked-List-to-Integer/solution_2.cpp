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
    int getDecimalValueHelper(int result, ListNode* head) {
        if(!head) return result;
        return getDecimalValueHelper(result * 2 + head->val, head->next);
    }
public:
    int getDecimalValue(ListNode* head) {
        return getDecimalValueHelper(0, head);
    }
};
