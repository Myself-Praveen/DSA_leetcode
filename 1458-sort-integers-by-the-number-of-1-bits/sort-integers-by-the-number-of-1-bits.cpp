class Solution {
public:
    int fun(int a) {
        int b = 0;
        while (a != 0) {
            b += a % 2;
            a /= 2;
        }
        return b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> res;
        map<int, vector<int>> mp;
        for (int i = 0; i < arr.size(); i++) {
            int a = fun(arr[i]);
            mp[a].push_back(arr[i]);
        }
        for (auto &x : mp) {
            int b = x.second.size();
            sort(x.second.begin(), x.second.end());
            for (int i = 0; i < b; i++) {
                res.push_back(x.second[i]);
            }
        }
        return res;
    }
};