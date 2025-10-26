class Solution {
public:
    int add(int n){
        int add=0;
        while(n>0){
            int b=n%10;
            add+=b;
            n/=10;
        }
        return add;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int b=add(nums[i]);
            nums[i]=b;
        }
        int min=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]<min) min=nums[i];
        }
        return min;
    }
};