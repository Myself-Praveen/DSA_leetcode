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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        ListNode* p=head;
        if(cnt%2!=0){
            int a=cnt/2;
            for(int i=1;i<=a;i++){
                p=p->next;
            }
            return p;
        }
        else{
            int a=cnt/2;
            for(int i=1;i<=a;i++){
                p=p->next;
            }
            return p;

        }
    }
};