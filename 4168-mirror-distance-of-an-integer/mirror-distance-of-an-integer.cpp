class Solution {
public:
    int mirrorDistance(int n) {
        string s=to_string(n);
        // string b=reverse(s);
        reverse(s.begin(),s.end());
        int d=stoi(s);
        int c=abs(d-n);
        return c;
    }
};