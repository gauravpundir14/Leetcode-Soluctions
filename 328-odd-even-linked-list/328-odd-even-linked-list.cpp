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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* dummye=new ListNode(0) ;
        ListNode* dummyeven=dummye;
         ListNode* dummyo=new ListNode(0) ;
        ListNode* dummyodd=dummyo;
        ListNode* temp=head;
        int k=1;
        while(temp!=NULL )
        {   
            if(k%2==0)
            {
                ListNode* store= new ListNode(temp->val);
                dummyeven->next=store;
                dummyeven=dummyeven->next;
                
            }
            
            else
            {
                ListNode* store2= new ListNode(temp->val);
                dummyodd->next=store2;
                dummyodd=dummyodd->next;
                
            }
            
            temp=temp->next;
            k++;
        }
       ListNode* real=dummyo->next;
        
        while(real->next!=NULL and real!=NULL)
        {
            real=real->next;
        }
        real->next=dummye->next;
        
        return dummyo->next;
        
        
        
    }
};