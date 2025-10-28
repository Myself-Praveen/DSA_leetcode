class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        for(int i=0;i<words.size();i++){
            string c=words[i];
            int f=0;
            for(int j=0;j<c.size();j++){
                if(c[j]==x) f=1;
            }
            if(f) v.push_back(i);

        }
        return v;
        
    }
};