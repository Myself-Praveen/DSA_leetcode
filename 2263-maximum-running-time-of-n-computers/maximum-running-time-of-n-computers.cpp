class Solution {
public:
    bool check(int n, vector<int>& batteries, long long mid) {
        long long sum = 0;
        for (long long b : batteries)
            sum += min(b, mid);

        return sum >= n * mid;
    }

    long long maxRunTime(int n, vector<int>& batteries) {
        long long tot = 0;
        for (auto it : batteries) {
            tot += it;
        }
        long long l = 0;
        long long r = tot / n;
        long long res = 0;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (check(n, batteries, mid)) {
                res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return res;
    }
};