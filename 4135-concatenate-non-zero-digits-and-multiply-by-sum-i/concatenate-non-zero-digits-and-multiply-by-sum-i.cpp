class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>v;
        int a=n;
        int sum=0;
        while(a>0){
            int b=a%10;
            a=a/10;
            if(b>0)v.push_back(b);
            sum+=b;
        }
        int t=v.size()-1;
        int i=v.size()-1;
        long long x;
        while(t>=0){
            x+=v[i]*pow(10,t);
            t--;
            i--;
        }
        return x*sum;

    }
};