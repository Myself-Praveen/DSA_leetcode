class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        while(n>0){
            int b=n%10;
            sum+=b;
            pro*=b;
            n=n/10;
        }
        return pro-sum;
    }
};