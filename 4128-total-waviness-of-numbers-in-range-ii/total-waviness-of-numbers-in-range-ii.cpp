class Solution {
public:
    typedef long long ll;

    vector<int> p;

    Solution() {

        for (int a = 0; a < 10; a++) {
            for (int b = 0; b < 10; b++) {
                for (int c = 0; c < 10; c++) {

                    if ((b > a && b > c) || (b < a && b < c)) {
                        p.push_back(a * 100 + b * 10 + c);
                    }

                }
            }
        }
    }

    long long totalWaviness(long long l, long long r) {

        ll ans = 0;

        for (int z = 0; z < 2; z++) {

            ll x;

            if (z == 0) x = r;
            else x = l - 1;

            if (x < 100) continue;

            ll cur = 0;

            for (auto v : p) {

                ll t = 1;

                while (t * 100 <= x) {

                    ll a = x / (t * 1000);
                    ll b = (x / t) % 1000;
                    ll c = x % t;

                    if (b > v) {
                        cur += (a + 1) * t;
                    }
                    else if (b == v) {
                        cur += a * t + c + 1;
                    }
                    else {
                        cur += a * t;
                    }

                    if (v < 100) {
                        cur -= t;
                    }

                    t *= 10;
                }
            }

            if (z == 0) ans += cur;
            else ans -= cur;
        }

        return ans;
    }
};