class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size() == 1)
            return 0;
        sort(nums.begin(), nums.end());
        int mn = INT_MAX, j = 0;
        for(int i = k-1; i < nums.size(); ++i)
        {
            mn = min(mn, nums[i]-nums[j]);
            ++j;
        }
        return mn;
    }
};