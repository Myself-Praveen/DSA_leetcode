class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        vector<int>c;
        a.push_back(nums[0]);
        b.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(a[a.size()-1] > b[b.size()-1]){
                a.push_back(nums[i]);
            }
            else b.push_back(nums[i]);
        }
        for(int i=0;i<a.size();i++){
            c.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++){
            c.push_back(b[i]);
        }

        return c;

    }
};