class Solution {
public:
    bool isPowerOfTwo(int n) {
        // int a=n
        if(n<=0) return false;
        int b=log2(n);
        int c=1;
        for(int i=0;i<b;i++){
            c*=2;
        }
        if(c==n) return true;
        else return false;
        
    }
};