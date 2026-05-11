class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                a.push_back(nums[i]);
            }
            else{
                int n=nums[i];
                vector<int>p;
                while(n>0){
                    int b=n%10;
                    p.push_back(b);
                    n/=10;
                }
                for(int i=p.size()-1;i>=0;i--){
                    a.push_back(p[i]);
                }

            }
        }
        return a;
    }
};