class Solution {
public:
    int rev(int x){
        int a=0;
        while(x>0){
            int b=x%10;
            a=a*10+b;
            x/=10;
        }
        return a;
    }
    int countNicePairs(vector<int>& nums) {
        int cnt=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            nums[i]-=rev(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                cnt=cnt%1000000007;
                cnt+=mp[nums[i]];
                mp[nums[i]]++;
            }
            else mp[nums[i]]++;
        }
        return cnt%1000000007;
    }
};