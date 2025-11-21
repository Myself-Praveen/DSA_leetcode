class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>sol(n);
        vector<int>suf(n);
        vector<int>pre(n);
        pre[0]=1;
        int p=nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i]=p*pre[i-1];
            p=nums[i];
        }
        suf[n-1]=1;
        int q=nums[nums.size()-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=q*suf[i+1];
            q=nums[i];
        }
        for(int i=0;i<n;i++){
            sol[i]=pre[i]*suf[i];
        }
        return sol;
    }
};