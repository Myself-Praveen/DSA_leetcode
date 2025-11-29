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
        ListNode* x=new ListNode(10);
        ListNode* y=x;
        ListNode* temp=head->next;
        while(temp){
            int s=0;
            while(temp->val!=0){
                s+=temp->val;
                temp=temp->next;
            }
            ListNode* tt=new ListNode(s);
            y->next= tt;
            y=tt;
            temp=temp->next;

            
        }
        return x->next;
        
    }
};