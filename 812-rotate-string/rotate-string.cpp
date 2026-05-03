class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < s.size(); i++) {
            if(s == goal) return true;

            reverse(s.begin(), s.begin() + 1);
            reverse(s.begin() + 1, s.end());
            reverse(s.begin(), s.end());
        }

        return false;
    }
};