class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& c) {
        int cnt=0;
        sort(g.begin(),g.end());
        sort(c.begin(),c.end());
        int i=0;
        int j=0;
        while (i < g.size() && j < c.size())
{
            if(c[j]>=g[i]){
                i++;
                j++;
                cnt++;
            }
            else j++;
        }
        return cnt;
    }
};