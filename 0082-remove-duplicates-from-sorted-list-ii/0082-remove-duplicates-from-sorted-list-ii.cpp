class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *prev = dummy;
        ListNode *curr = head;

        while (curr) {
            // check for duplicates
            if (curr->next && curr->val == curr->next->val) {
                // skip all duplicates
                while (curr->next && curr->val == curr->next->val) {
                    curr = curr->next;
                }
                // remove the duplicates
                prev->next = curr->next;
            } else {
                prev = curr; // move prev forward only when no duplicates
            }
            curr = curr->next;
        }
        return dummy->next;
    }
};
