class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            for (int j = 1; j < nums.size() - 1; j++) {
                for (int k = 2; k < nums.size(); k++) {
                    if ((i < j) && (j < k) && (nums[j] - nums[i] == diff) &&
                        (nums[k] - nums[j] == diff))
                        cnt++;
                }
            }
        }
        return cnt;
    }
};