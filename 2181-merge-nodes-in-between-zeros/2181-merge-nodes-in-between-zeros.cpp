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
    ListNode* mergeNodes(ListNode* head) {
       ListNode* dummy= new ListNode(0);
       ListNode* dummyp=dummy;
       ListNode* temp=head->next;;
        int sum=0;
        while(temp!=NULL)
        {   sum=0;
            while(temp->val!=0)
            {
                sum=sum+temp->val;
                temp=temp->next;
            }
           ListNode* store= new ListNode(sum);
           dummyp->next=store;
           dummyp=store;
         temp=temp->next;
         
         
        }
        return dummy->next;
        
    }
};