class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string res="";
        string w="";
        vector<string>p;
        while(ss>>w){
            p.push_back(w);
        }
        int n=p.size();
        for(int i=n-1;i>=0;i--){
            res+=p[i]+" ";
        }
        res.pop_back();
        return res;
    }
};