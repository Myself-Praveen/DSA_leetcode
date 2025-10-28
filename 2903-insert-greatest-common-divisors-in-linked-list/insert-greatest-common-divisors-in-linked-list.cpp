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
    ListNode* insertGreatestCommonDivisors(ListNode* p) {
        ListNode* head=p;
        while(head->next!=NULL){
            
            int a=gcd(head->val,head->next->val);
            ListNode* temp=new ListNode(a);
            temp->next=head->next;
            head->next=temp;
            head=temp->next;
        }
        return p;
    }
};