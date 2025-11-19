class Solution {
public:
    int found(vector<int>& nums,int x){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x) return 1;
        }
        return 0;
    }
    int findFinalValue(vector<int>& nums, int original) {
        int f=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==original){
                f=i;
                break;
            }
        }
        if(f==-1) return original;
        int x=original;
        
            x=nums[f]*2;
            while(found(nums,x)){
                x=2*x;
            }
        
        return x;
    }
};