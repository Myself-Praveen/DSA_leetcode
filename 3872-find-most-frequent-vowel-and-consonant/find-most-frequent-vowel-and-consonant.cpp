class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int m=0;
        int mf=0;
        for(auto x:mp){
            char p=x.first;
            int q=x.second;
            if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u'){
                m=max(m,q);
            }
            else{
                mf=max(mf,q);
            }
        }
        return m+mf;
    }
};