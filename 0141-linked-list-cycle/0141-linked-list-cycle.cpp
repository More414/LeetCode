class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head) return false;  // empty list check
        
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;           // move 1 step
            fast = fast->next->next;     // move 2 steps
            if (slow == fast) return true; // cycle found
        }

        return false; // no cycle
    }
};
