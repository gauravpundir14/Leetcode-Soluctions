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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        ListNode* pev;
        if(head==NULL) return NULL;
            
        
        
        while(temp->next!=NULL)
        { if(head->val==val)
          { 
            head=head->next;
            temp=head;
           
          }
         
          else if(temp->next->val==val)
         {
             pev=temp->next->next;
             temp->next=pev;
             
         }
         else 
          
            temp=temp->next;
        }
        if(head->val==val)
          { 
            head=head->next;
            temp=head;
           
          }
        
        
        return head;
    }
};