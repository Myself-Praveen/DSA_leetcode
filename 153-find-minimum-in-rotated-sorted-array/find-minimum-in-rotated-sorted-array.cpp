class Solution {
public:
    int findMin(vector<int>& nums) {
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1] && nums[i]<nums[i-1]){
                return nums[i];
            }
        }
        int n=nums.size();
        return min(nums[0],nums[n-1]);
    }
};