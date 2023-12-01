/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    ListNode* brent(ListNode* head) {
        if(!head || !head->next) return nullptr;

        long power = 1, lam = 1;
        auto* slow = head, *fast = head->next;

        while(slow != fast) {
            if(power == lam) {
                slow = fast;
                power *= 2;
                lam = 0;
            }

            if(!fast->next) return nullptr;
            fast = fast->next;
            lam += 1;
        }

        slow = fast = head;
        for(int i = 0; i < lam; ++i) {
            fast = fast->next;
        }

        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        return brent(head);
    }
};
