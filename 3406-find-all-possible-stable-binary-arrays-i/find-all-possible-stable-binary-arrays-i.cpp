class Solution {
public:
    int MOD = 1e9+7;

    int f(int z, int o, int last, int lim, vector<vector<vector<int>>> &dp){

        if(z < 0 || o < 0) return 0;
        if(z == 0 && o == 0) return 1;

        if(z == 0){
            if(o <= lim && last == 0) return 1;
            return 0;
        }

        if(o == 0){
            if(z <= lim && last == 1) return 1;
            return 0;
        }

        if(dp[z][o][last] != -1) return dp[z][o][last];

        long long ans = 0;

        if(last == 1){ // previous = 1 → put 0
            for(int x=1; x<=min(z,lim); x++)
                ans = (ans + f(z-x, o, 0, lim, dp)) % MOD;
        }
        else{ // previous = 0 → put 1
            for(int x=1; x<=min(o,lim); x++)
                ans = (ans + f(z, o-x, 1, lim, dp)) % MOD;
        }

        return dp[z][o][last] = ans;
    }

    int numberOfStableArrays(int z, int o, int lim) {

        vector<vector<vector<int>>> dp(
            z+1, vector<vector<int>>(o+1, vector<int>(2,-1))
        );

        return (f(z,o,1,lim,dp) + f(z,o,0,lim,dp)) % MOD;
    }
};