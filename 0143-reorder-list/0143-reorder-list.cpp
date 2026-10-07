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
    void reorderList(ListNode* head) {
        ListNode * slow,*fast,*prev,*curr,*nxt;
        slow=fast=head;
        while(fast && fast->next)
        {
           slow=slow->next;
           fast=fast->next->next;
        }
        prev=nullptr;
        curr=slow->next;
        slow->next=NULL;
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        ListNode*temp=head->next,*ans=head;
        
        while(prev)
        {
              ans->next=prev;
             prev=prev->next;
              ans=ans->next;      
              ans->next=temp;
                temp=temp->next;
              ans=ans->next;

        }
        if(temp)
        {
            ans->next=temp;
            ans=ans->next;
            temp=temp->next;
        }
        ans->next=nullptr;
         
        
    }
};