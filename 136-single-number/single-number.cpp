class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int y=nums[0];
        for(int i=1;i<nums.size();i++){
            y=y^nums[i];
        }
        return y;
    }
};