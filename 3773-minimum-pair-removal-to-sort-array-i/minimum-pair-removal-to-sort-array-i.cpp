class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;
        
        // Keep iterating until array is non-decreasing
        while (true) {
            bool sorted = true;
            int n = nums.size();
            
            // Check if array is non-decreasing
            for (int i = 0; i < n - 1; i++) {
                if (nums[i] > nums[i + 1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted) return ops;  // Done if sorted
            
            // Find leftmost adjacent pair with minimum sum
            int minSum = INT_MAX, idx = 0;
            for (int i = 0; i < n - 1; i++) {
                int sum = nums[i] + nums[i + 1];
                if (sum < minSum) {
                    minSum = sum;
                    idx = i;
                }
            }
            
            // Merge the chosen pair
            nums[idx] = nums[idx] + nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);
            ops++;
        }
    }
};
