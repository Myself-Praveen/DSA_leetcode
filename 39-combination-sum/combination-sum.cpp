class Solution {
public:
    void helper(vector<vector<int>>&v,vector<int>nums,vector<int>ans,int x,int idx){
        if(x<0) return;
        if(x==0){
            v.push_back(ans);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            ans.push_back(nums[i]);
            helper(v,nums,ans,x-nums[i],i);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>v;
        vector<int>ans;
        helper(v,candidates,ans,target,0);
        return v;
    }
};