class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int a=grid.size();
        int b=grid[0].size();
        int c=0;
        int rs=0;
        int rsum=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(grid[i][j]>0)c++;
                rs=max(rs,grid[i][j]);
            }
            rsum+=rs;
            rs=0;
        }
        int csum=0;
        int cs=0;
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                cs=max(cs,grid[j][i]);
            }
            csum+=cs;
            cs=0;
        }
        return c+rsum+csum;
    }
};