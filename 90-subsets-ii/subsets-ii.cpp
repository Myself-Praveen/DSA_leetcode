class Solution {
public:
    void helper(vector<vector<int>>& v,vector<int>ans,vector<int>&nums,int idx){
        if(idx==nums.size()){
            v.push_back(ans);
            return;
        }
        helper(v,ans,nums,idx+1);
        ans.push_back(nums[idx]);
        helper(v,ans,nums,idx+1);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>v;
        vector<int>ans;
        helper(v,ans,nums,0);
        set<vector<int>>s(v.begin(),v.end());
        
        vector<vector<int>> res(s.begin(), s.end());
        return res;
    }
};