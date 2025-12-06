class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>pq;
        for(auto ele:arr){
            int dis=abs(ele-x);
            pq.push({dis,ele});
            if(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(pq.size()!=0){
            
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};