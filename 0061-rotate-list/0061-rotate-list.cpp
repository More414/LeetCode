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
   
   ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0)
        return head;

    // Find length of list
    ListNode* temp = head;
    int len = 1;
    while (temp->next) {
      
        len++;
        temp = temp->next;
        
    }

    // // Make it circular
    temp->next = head;

    k = k % len;
    int newlink = len - k;

    ListNode* Tail = temp;
    while (newlink--) {
        Tail = Tail->next;
    }

    ListNode* Head = Tail->next;
    Tail->next = NULL;

    return Head;
}
};