class Solution {
public:
    int helper(int n){
        int cnt=0;
        int s=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                int other=n/i;
                if(i==other){
                cnt+=1;
                }
                    
                else{
                    cnt+=2;
                    s=s+i+other;
                }

            }
        }
        if(cnt==4) return s;
        else return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int res=0;
        for(int x:nums){
            res+=helper(x);
        }
        return res;
    }
};