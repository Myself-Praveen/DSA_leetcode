#include <vector>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    arr[i]++;
                }
            }
        }

        int maxFreq = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxFreq) {
                maxFreq = arr[i];
            }
        }

        int result = 0;
        vector<int> visited(n, 0);
        for (int i = 0; i < n; i++) {
            if (!visited[i] && arr[i] == maxFreq) {
                result += arr[i];
                for (int j = i + 1; j < n; j++) {
                    if (nums[i] == nums[j]) {
                        visited[j] = 1;
                    }
                }
            }
        }

        return result;
    }
};
