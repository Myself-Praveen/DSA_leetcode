class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x: nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto x:mp){
            pq.push({x.second,x.first});

        }
        while(pq.size()>k){
            pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            pair<int,int>p;
            p=pq.top();
            ans.push_back(p.second);
            pq.pop();
        }
        return ans;
    }
};