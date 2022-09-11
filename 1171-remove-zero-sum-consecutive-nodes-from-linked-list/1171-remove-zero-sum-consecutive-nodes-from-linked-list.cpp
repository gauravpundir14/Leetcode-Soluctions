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
     ListNode* solve(ListNode* head,bool & change)
     {   if(head==NULL) return head;
             ListNode*  temp=head;
             int sum=0;
         while(temp!=NULL)
         {
             sum=sum+temp->val;
             if(sum==0)
             {
             break;
             }
             temp=temp->next;
         }
         
         if(sum==0)
         {
             change=true;
             return 
                 temp->next;
         }
         
         head->next=solve(head->next,change);
         
         return head;
     }
    
    
    ListNode* removeZeroSumSublists(ListNode* head) {
        bool change=false;
        
        while(true)
        {
            bool change=false;
            head=solve(head,change);
            if(head==NULL || change==false) break;
            
            
        }
        return head;
        
    }
};