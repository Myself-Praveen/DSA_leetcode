class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int op=0;
        while(1){
            int s=0;
            int n=nums.size();
            if(n <= 1) return op;
            for(int i=0;i<n-1;i++){
                if(nums[i]>nums[i+1]){
                    s=1;
                    break;
                }
            }
            if(s==0) return op;
            int mx=INT_MAX;
            int idx=0;
            for(int i=0;i<n-1;i++){
                int sum=nums[i]+nums[i+1];
                if(sum<mx){
                    mx=sum;
                    idx=i;
                }
            }
            nums[idx]+=nums[idx+1];
            nums.erase(nums.begin() + idx + 1);
            op++;
        }
    }
};