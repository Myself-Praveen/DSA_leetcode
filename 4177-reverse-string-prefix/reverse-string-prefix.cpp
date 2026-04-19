class Solution {
public:
    string reversePrefix(string s, int k) {
        string b="";
        for(int i=0;i<k;i++){
            b.push_back(s[k-1-i]);
        }
        for(int i=k;i<s.size();i++){
            b.push_back(s[i]);
        }
        return b;
    }
};