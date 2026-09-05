class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>mi(n);
        mi[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            mi[i]=min(nums[i],mi[i+1]);
        }

        int maxx=nums[0];
        for(int i=0;i<n;i++){
            maxx=max(nums[i],maxx);
            int c=maxx-mi[i];
            if(c<=k){
                return i;
            }
        }
        return -1;
    }
};