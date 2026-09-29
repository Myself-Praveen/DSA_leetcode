class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int a=0;
        int b=0;
        for(int i=0;i<gas.size();i++){
            a+=gas[i];
            b+=cost[i];
        }
        if(a<b) return -1;
        int s=0;
        int f=0;
        for(int i=0;i<gas.size();i++){
            int g=gas[i]-cost[i];
            
            f+=g;
            if(f<0){
               f=0;
               s=i+1;
            }
        }
        return s;
    }
};