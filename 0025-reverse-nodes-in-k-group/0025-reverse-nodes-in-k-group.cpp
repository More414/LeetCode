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
    ListNode* reverseKGroup(ListNode* head, int k) {
        //creating a pointer to point head
        ListNode *temp= head; 
        int count=0;

        //moving pointer till k(3)  and making the temp to point the 4th node
        while(count<k){
            if(!temp)return head;
            else{
            temp= temp->next;
            }
            count++;
        }

        //NextHalf from the 4th node calling recursive function
        ListNode *NextHalf= reverseKGroup(temp, k);
        temp=head;
        count=0;

        while(count<k){
            ListNode *Next= temp->next; //it is pointing the fist time in second node

            temp->next=NextHalf; //connecting the first node before NextHalf 
                                  /*                                 1->4->5
                                                                2->1->4->5   
                                                             3->2->1->4->5 */
            NextHalf=temp;
            temp= Next;

            count++;

        }

        return NextHalf;

        
    }
};