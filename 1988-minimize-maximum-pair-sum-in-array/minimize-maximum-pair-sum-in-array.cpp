class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // return nums[0]+nums[nums.size()-1];
        int s=0;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            s=max(s,nums[i]+nums[n-i-1]);
        }
        return s;
    }
};