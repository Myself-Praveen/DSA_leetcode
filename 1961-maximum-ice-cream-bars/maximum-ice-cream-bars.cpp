class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ans= 0;
        for(int el : costs)
        {
            if(el > coins)
                break;
            coins -= el;
            ans++;
        }
       return ans;
    }
};