class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& h, int t) {
        int x=0;
        for(int i=0;i<h.size();i++){
            if(h[i]>=t) x++;
        }

        return x;
    }
};