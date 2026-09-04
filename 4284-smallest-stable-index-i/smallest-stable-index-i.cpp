class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int p=0;
        int n=nums.size();
        int maxx=nums[0];
        int minn=nums[n-1];
        vector<int>m(n);
        m[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]<m[i+1]){
                m[i]=nums[i];
            }
            else m[i]=m[i+1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxx){
                maxx=nums[i];
            }
            // if(nums[n-1-i]<minn){
            //     minn=nums[n-1-i];
            // }
            int c=maxx-m[i];
            if(c<=k){
                return i;
            }
        }
        return -1;
    }
};