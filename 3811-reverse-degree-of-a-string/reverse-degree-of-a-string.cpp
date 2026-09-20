class Solution {
public:
    int reverseDegree(string s) {
        int d=0;
        for(int i=0;i<s.size();i++){
            d+=((i+1)*(int('z')-int(s[i])+1));
        }
        return d;
    }
};