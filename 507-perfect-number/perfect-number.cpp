class Solution {
public:
    bool checkPerfectNumber(int n) {
        int sum=0;
        for(int i=1;i*i<n;i++){
            if(n%i==0) sum+=i;
        }
        for(int i=sqrt(n);i>1;i--){
            if(n%(n/i)==0) sum+=n/i;
        }

        return (sum==n);
    }
};