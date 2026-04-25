class Solution {
public:
    bool validDigit(int n, int x) {
        int a=n;
        unordered_map<int,int>mp;
        mp[x]=0;
        while(a>=10){
            int b=a%10;
            mp[b]+=1;
            a/=10;
        }
        if(a==x) return false;
        if(mp[x]>=1) return true;
        return false;
        
    }
};