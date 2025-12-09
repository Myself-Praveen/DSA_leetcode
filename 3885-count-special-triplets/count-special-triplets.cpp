class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int mod=1e9+7;
        int cnt=0;
        unordered_map<int,int>lmap;
        unordered_map<int,int>rmap;
        for(auto x:nums){
            rmap[x]++;
        }
        rmap[nums[0]]--;
        lmap[nums[0]]++;
        for(int i=1;i<nums.size()-1;i++){
            rmap[nums[i]]--;
            if(lmap.count(nums[i]*2) && rmap.count(nums[i]*2)){
             cnt = (cnt + ( (1LL * lmap[nums[i]*2] * rmap[nums[i]*2]) % mod )) % mod;
                // lmap[nums[i]*2]--;
            }
                lmap[nums[i]]++;
                // rmap[nums[i]]--;
                // rmap[nums[i]*2]--;

            
                // lmap[nums[i]]++;
            
        }
        return cnt;
    }
};