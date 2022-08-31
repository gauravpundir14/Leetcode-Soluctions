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
    ListNode* reverseList(ListNode* head) {
         ListNode* curr=head;
        
              ListNode* prev=NULL;
              if(head==NULL)
              {
                  ListNode* forw=NULL;
                  return head;
              }
                ListNode* forw=curr->next;
        if(head->next==NULL)
        {
             return head;
        }
        
        else 
            while(curr->next!=NULL)
            {
                curr->next=prev;
                prev=curr;
                curr=forw;
                forw=forw->next;
            }
         curr->next=prev;
                prev=curr;
                curr=forw;
        
        return prev;
    }
};