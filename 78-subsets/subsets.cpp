class Solution {
public:
    void subset(vector<int>nums,vector<int>ans,vector<vector<int>>&v,int idx){
        if(idx==nums.size()){
            v.push_back(ans);
            return;
        }
        subset(nums,ans,v,idx+1);
        ans.push_back(nums[idx]);
        subset(nums,ans,v,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>v;
        subset(nums,ans,v,0);
        return v;
    }
};