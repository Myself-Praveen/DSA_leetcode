class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int cnt=0;
        vector<int>arr(nums.size());
        arr[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            arr[i]=nums[i]+arr[i-1];
        }
        for(int i=1;i<nums.size();i++){
            if((arr[i]-(arr[nums.size()-1]-arr[i]))%2==0) cnt++;
        }
        return cnt;
    }
};