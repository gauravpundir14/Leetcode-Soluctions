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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* temp=NULL;
            
        vector<int > v;
        for(auto it: lists)
        {
            temp=it;
            while(temp!=NULL)
            {
                v.push_back(temp->val);
                temp=temp->next;
            }
            
        }
        
        sort(v.begin(),v.end());
        
        ListNode* dummy=new ListNode(0);
        dummy->next=NULL;
        ListNode* dummyt=dummy;
        
        for(auto it :v)
        {
            ListNode* dummyp=new ListNode(it);
            dummyt->next=dummyp;
            dummyt=dummyt->next;
            
        }
          dummyt->next=NULL;
        return dummy->next;
        
    }
};