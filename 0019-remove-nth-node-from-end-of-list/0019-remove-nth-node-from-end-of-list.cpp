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
       ListNode* slow,*fast;
       slow=fast=head;
       int i=0;
       while(i<n)
       {
           fast=fast->next;
           i++;
       }
       if(fast==nullptr)
 {
    return head->next;
 }
       while(fast->next)
       {
        fast=fast->next;
        slow=slow->next;
       }
       ListNode * temp;
       temp=slow->next->next;
       slow->next=temp;
       return head;
    }
};