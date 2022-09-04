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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL and head->next==NULL)
        {  head=NULL;
            return head;
        }
         ListNode* fast=head;
          ListNode* slow=head;
           ListNode* prev=head;
        
        
        while(n--)
        {
            fast=fast->next;
        }
         if(fast==NULL){
            prev=prev->next;
            delete head;
            return prev;
        }
        
        while( fast )
        {  prev=slow;
            slow=slow->next;
            fast=fast->next;

        }
        prev->next=slow->next;
        delete slow;
        
        
        return head;
    }
};