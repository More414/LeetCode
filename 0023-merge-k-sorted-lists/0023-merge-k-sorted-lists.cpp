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
    // SORT the two linked lists  for appling to all two lists
    ListNode *MergeTwoList(ListNode *l1, ListNode *l2){
        if(!l1)return l2;// this is for only one list present
        if(!l2)return l1;

        if(l1->val <= l2->val){
           l1->next=MergeTwoList(l1->next, l2);
            return l1;
        }else{
            l2->next=MergeTwoList(l1, l2->next);
            return l2;
            
        }
        return NULL;
    }


    // appling the recurtion to the given vector list 
    ListNode *partitionLinkedList(int start, int end, vector<ListNode*>& lists){

        if(start>end) return NULL;

        if(start==end) return lists[start]; // if only one list present then use this case

        int mid = start+(end-start)/2;

        ListNode *L1= partitionLinkedList(start, mid, lists);// left half of the linked list 

        ListNode *L2= partitionLinkedList(mid+1, end, lists);// right half of the linked list

        return MergeTwoList(L1, L2); //sorting the list 

    }


    ListNode* mergeKLists(vector<ListNode*>& lists) {

        int k=lists.size();

        if(k==0){
            return NULL;
        }
        return partitionLinkedList(0, k-1, lists);
        

    }
};