class Solution {
public:
    int totalMoney(int n) {
        int a = n / 7 ;
        int sum = 0;
        int b = n % 7;
        
        for (int i = 1; i <= b; i++) {
            int b = a + i;
            sum = sum + b;
        }
        while (a > 0) {
            for (int i = 1; i <= 7; i++) {
                int b = (a-1) + i ;
                sum += b;
            }
            a--;
        }
        return sum;
    }
};