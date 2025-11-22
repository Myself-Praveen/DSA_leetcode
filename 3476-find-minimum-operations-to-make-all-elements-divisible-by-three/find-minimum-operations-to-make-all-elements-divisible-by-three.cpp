class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0) continue;
            else{
                if(nums[i]%3==1){
                    nums[i]-=1;
                    cnt++;
                }
                else{
                    nums[i]+=1;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};