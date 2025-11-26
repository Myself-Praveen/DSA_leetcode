class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>v(m,vector<int>(n,-1));
        ListNode* temp=head;
        int top=0;
        int left=0;
        int right=n-1;
        int bottom=m-1;

        while(top<=bottom && left<=right){

            for(int i=left;i<=right;i++){
                if(temp==NULL) return v;
                v[top][i]=temp->val;
                temp=temp->next;
            }
            top++;

            for(int i=top;i<=bottom;i++){
                if(temp==NULL) return v;
                v[i][right]=temp->val;
                temp=temp->next;
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    if(temp==NULL) return v;
                    v[bottom][i]=temp->val;
                    temp=temp->next;
                }
                bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    if(temp==NULL) return v;
                    v[i][left]=temp->val;
                    temp=temp->next;
                }
                left++;
            }
        }

        return v;
    }
};
