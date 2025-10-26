class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int n=num;
        while(num>0){
            int b=num%10;
            if(n%b==0) cnt++;
            num/=10;
        }
        return cnt;
    }
};