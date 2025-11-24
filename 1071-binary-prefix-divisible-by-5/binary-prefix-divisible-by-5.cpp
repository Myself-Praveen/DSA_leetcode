class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>v;
        int val=0;
        for(int i=0;i<nums.size();i++){
            val=(val*2+nums[i])%5;
            if(val%5==0) v.push_back(true);
            else v.push_back(false);
        }
        return v;
        
    }
};