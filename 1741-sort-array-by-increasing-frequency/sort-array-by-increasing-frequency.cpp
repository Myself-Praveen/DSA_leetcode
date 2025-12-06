class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        unordered_map<int,int>mp;

        for(auto ele:nums){
            mp[ele]++;
        }
        for(auto x:mp){
            pq.push({x.second,-x.first});
        }
        vector<int>ans;
        while(pq.size()>0){
            int a=pq.top().first;
            while(a--){ans.push_back(-pq.top().second);}
            pq.pop();
        }
        return ans;
    }
};