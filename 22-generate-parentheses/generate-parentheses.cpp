class Solution {
public:
    void helper(vector<string>&v,string s,int open,int close,int n){
        if(close==n){
            v.push_back(s);
            return;
        }
        if(open<n) helper(v,s+'(',open+1,close,n);
        if(close<open) helper(v,s+')',open,close+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        string s="";
        helper(v,s,0,0,n);
        return v;
    }
};