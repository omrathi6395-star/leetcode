// **
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       ListNode *slow,*fast;
       if(!head || !head->next)
       {
         return head;
       }
       slow=fast=head;
       ListNode *dummy= new ListNode(-1);
       dummy->next=head;
       slow=fast=dummy;
       while(fast&&fast->next)
       {
         slow=slow->next;
         fast=fast->next->next;
       }
       ListNode*prev,*curr,*nxt;
       prev=slow;
       curr=slow->next;
       slow->next=NULL;
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        while(head!=prev && head )
        {
            if(head->val!=prev->val)
            {
                return 0;
            }
            head=head->next;
            prev=prev->next;
        }
        return 1;


    }
};