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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        static auto cmp = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };

        priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> min_heap;

        for(const auto& list : lists) {
            if(list)
                min_heap.emplace(list);
        }

        ListNode* dummy_head = new ListNode();
        auto tail = dummy_head;

        while(!min_heap.empty()) {
            const auto smallest_list = min_heap.top();
            min_heap.pop();
            tail->next = smallest_list;
            tail = smallest_list;
            if(smallest_list->next)
                min_heap.emplace(smallest_list->next);
        }

        return dummy_head->next;
    }
};
