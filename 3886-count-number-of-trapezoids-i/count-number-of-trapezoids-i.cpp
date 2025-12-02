class Solution {
public:
    const long long MOD = 1000000007;

    long long C2(long long n) {
        return (n * (n - 1) / 2) % MOD;
    }

    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int, long long> mp;
        for (auto &p : points) {
            mp[p[1]]++;
        }
        long long edgesum = 0;
        long long ans = 0;
        for (auto &el : mp) {
            long long cnt = el.second;

            if (cnt >= 2) {
                long long edge = C2(cnt);  

                ans = (ans + edgesum * edge) % MOD;

                edgesum = (edgesum + edge) % MOD;
            }
        }

        return ans;
    }
};
