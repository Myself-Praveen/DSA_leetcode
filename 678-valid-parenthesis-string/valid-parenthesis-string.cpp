class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size(), openings = 0, closings = 0;
        for(int i = 0;i < n;i++){
            if(s[i] != ')')
                openings++;
            else
                openings--;
            
            if(s[n - i - 1] != '(')
                closings++;
            else
                closings--;
            
            if(openings < 0 or closings < 0)
                return false;
        }
        return true;
    }
};