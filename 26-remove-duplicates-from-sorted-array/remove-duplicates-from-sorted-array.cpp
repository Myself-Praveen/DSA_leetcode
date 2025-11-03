class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        vector<int> v;
        if (nums.size() == 0)
            return 0;
        v.push_back(nums[0]);
        for (int i = 0; i < nums.size(); i++) {
            int f = 0;
            for (int j = 0; j < v.size(); j++) {
                if (nums[i] == v[j]) {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                v.push_back(nums[i]);
        }
        nums.resize(v.size());
        for (int i = 0; i < v.size(); i++) {
            nums[i] = v[i];
        }
        return v.size();
    }
};