class Solution {
public:
    int scoreOfString(string s) {
        int si=0;
        for(int i=1;i<s.size();i++){
            si+=abs(s[i]-s[i-1]);
        }
        return si;
    }
};