class Solution {
public:
    int sym(int num){
        int a=0;
        int poww=0;
        int n=num;
        while(n>0){
            poww++;
            n/=10;
        }
        a=(poww+1)/2;
        int z=pow(10,a);
        int b=num/z;
        int c=num%z;
        int bsum=0;
        int csum=0;
        while(b>0){
            int x=b%10;
            bsum+=x;
            b/=10;
        }
        while(c>0){
            int y=c%10;
            csum+=y;
            c/=10;
        }
        if(bsum==csum) return 1;
        else return 0;
    }
    int count(int n){
        int cnt=0;
        while(n>0){
            cnt++;
            n/=10;
        }
        return cnt;
    }
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            int c=count(i);
            if(c%2!=0) continue;
            int s=sym(i);
            if(s>0) cnt++;
        }
        return cnt;
    }
};