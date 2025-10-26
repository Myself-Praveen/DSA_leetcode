class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int c=x;
        while(x>0){
            int b=x%10;
            sum+=b;
            x/=10;
        }
        if(c%sum==0) return sum;
        else return-1;
    }
};