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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=new ListNode(10);
        ListNode* a=list1;
        ListNode* b=list2;
        ListNode* temp=head;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                temp->next=a;
                a=a->next;

            }
            else{
                temp->next=b;
                b=b->next;
            }
            temp=temp->next;
        }
        if(a==NULL){
            temp->next=b;
        }
        else temp->next=a;
        return head->next;
    }
};