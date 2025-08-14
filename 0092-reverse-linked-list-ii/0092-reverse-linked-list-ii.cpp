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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        // Dummy node to handle case when left == 1
        ListNode dummy(0);
        dummy.next = head;
        ListNode* Lprev = &dummy; 

        // Step 1: Move Lprev to the node before left
        for (int i = 1; i < left; i++) {
            Lprev = Lprev->next;
        }

        // LL is the first node to reverse
        ListNode* LL = Lprev->next;

        // Step 2: Find Rpost (node after right)
        ListNode* RR = LL;
        for (int i = left; i < right; i++) {
            RR = RR->next;
        }
        ListNode* Rpost = RR->next;

        // Step 3: Reverse the middle segment
        ListNode* prev = Rpost;
        ListNode* curr = LL;
        while (curr != Rpost) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }

        // Step 4: Reconnect
        Lprev->next = prev;

        return dummy.next;
    }
};