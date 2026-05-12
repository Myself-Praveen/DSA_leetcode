class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b)
    {
        return a[1] - a[0] > b[1] - b[0];
    }
    int minimumEffort(vector<vector<int>>& tasks) 
    {
        sort(tasks.begin(),tasks.end(),cmp);
        int ans = tasks[0][1];
        int rem = ans - tasks[0][0];
        for(int i=1;i<tasks.size();i++)
        {
            if(rem>=tasks[i][1])
            {
                rem = rem - tasks[i][0];
            }
            else
            {
                int need = tasks[i][1] - rem;
                rem = rem + need;
                rem = rem - tasks[i][0];
                ans = ans + need;
            }
        }
        return ans;
    }
};