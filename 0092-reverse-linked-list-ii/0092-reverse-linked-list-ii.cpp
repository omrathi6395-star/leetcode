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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        if(left==right)
        {
            return head;
        }
        ListNode* slow=dummy,*fast=dummy,*start=dummy,*end=dummy;
        if(!head->next)
       {
        return head;
       }
        for(int i=0;i<left-1;i++)
        {
            start=start->next;
        }
        slow=start->next;
        for(int i=0;i<right;i++)
        {
            fast=fast->next;
        }
        end=fast->next;
        ListNode*k;
        k=slow;
        ListNode*prev=slow,*curr=slow->next,*nex=curr->next;
        while(curr!=end)
        {
               curr->next=prev;
               prev=curr;
               curr=nex;
               if(nex)
               {
             nex=nex->next;
               }
              

        }
        start->next=prev;
        k->next=curr;

       return dummy->next;

    }
};