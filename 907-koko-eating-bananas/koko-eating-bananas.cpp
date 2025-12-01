class Solution {
public:
    bool check(int speed,vector<int>& piles, int h){
        int cnt=0;
        for(int i=0;i<piles.size();i++){
            if(cnt>h) return false;
            if(piles[i]<=speed) cnt++;
            else if(piles[i]%speed==0) cnt+=piles[i]/speed;
            else cnt+=piles[i]/speed+1;
        }
        if(cnt<=h) return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1;
        int hi=0;
        for(auto it:piles){
            hi=max(hi,it);
        }
        int ans=1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,piles,h)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};