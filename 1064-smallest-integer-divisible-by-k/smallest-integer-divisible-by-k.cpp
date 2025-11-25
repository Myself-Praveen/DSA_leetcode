class Solution {
public:
    int smallestRepunitDivByK(int k) {
        long long n=1;
        if(n%k==0) return 1;
        long long cnt=1;
        if(k==2||k==5){
            return -1;
        }
        int p=k;
        while(p--){
            int rem=n%k;
            n=n*10+1;
            cnt++;
            if(rem == 0) return cnt;
            if(n%k==0) return cnt;
            n=n%k;
        }
        return -1;
    }
};