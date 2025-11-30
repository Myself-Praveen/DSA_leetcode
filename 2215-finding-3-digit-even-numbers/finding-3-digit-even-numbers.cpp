class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
     unordered_map<int,int>mp;
     for(auto it:digits){
        mp[it]++;
     }
     vector<int>ans;
     for(int i=100;i<=998;i+=2){
        int x=i;
        int a=i%10;
        x/=10;
        int b=x%10;
        x/=10;
        int c=x;
        if(mp.count(a)){
            mp[a]--;
            if(mp[a]==0) mp.erase(a);
            if(mp.count(b)){
                mp[b]--;
                if(mp[b]==0) mp.erase(b);
                if(mp.count(c)){
                    // mp[c]--;
                    // if(mp[c]==0) mp.erase(c);
                    ans.push_back(i);
                }
                // mp[c]++;
                mp[b]++;
            }
            mp[a]++;
        }
     }   
        return ans;
    }
};