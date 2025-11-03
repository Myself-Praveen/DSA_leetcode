class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i=0;i<=nums.size();i++){
            int f=0;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]) {
                    f=1;
                    break;
                }
            }
            if(f==0) return i;
        }
        return -1;
    }
};