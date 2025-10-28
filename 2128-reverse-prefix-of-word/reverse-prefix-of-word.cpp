class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s=word;
        int idx=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                idx=i;
                break;
            }

        }
        reverse(s.begin(),s.begin()+idx+1);
        return s;
    }
};