class Solution {
public:
    int smallestNumber(int n) {
        int a=log2(n);
        int b=pow(2,a+1);
        return b-1;
    }
};