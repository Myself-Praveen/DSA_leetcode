/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempa=headA;
        ListNode* tempb=headB;
        int cntA=0;
        while(tempa!=NULL){
            tempa=tempa->next;
            cntA++;
        }
        int cntB=0;
        while(tempb!=NULL){
            tempb=tempb->next;
            cntB++;
        }
        if(cntA<cntB){
            tempa=headA;
            tempb=headB;
            for(int i=1;i<=cntB-cntA;i++){
                tempb=tempb->next;
            }
            while(tempa!=tempb){
                tempa=tempa->next;
                tempb=tempb->next;
            }
            return tempa;

        }

        else{
            tempa=headA;
            tempb=headB;
            for(int i=1;i<=cntA-cntB;i++){
                tempa=tempa->next;
            }
            while(tempa!=tempb){
                tempa=tempa->next;
                tempb=tempb->next;
            }
            return tempa;

        }
    }
};