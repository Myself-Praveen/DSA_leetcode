class Solution {
public:
    bool check(long long mid,vector<int>& time, int ttrips){
        long long cnt=0;
        for(int i=0;i<time.size();i++){
            cnt+=mid/time[i];
        }
        if(cnt>=ttrips) return true;
        return false;
    }
    long long minimumTime(vector<int>& time, int ttrips) {
        long long lo=1;
        long long hi=0;
        for(auto it:time){
            hi=max(hi,(long long)it);
        }
        hi=hi*ttrips;
        long long ans=0;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(check(mid,time,ttrips)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};