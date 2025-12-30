class Solution {
public:
    bool check(vector<vector<int>>& grid,int x,int y){
        vector<bool>v(10,false);
        int a=0;
        for(int i=x;i<x+3;i++){
            for(int j=y;j<y+3;j++){
                a=grid[i][j];
                if(a<1 || a>9 || v[a]==true) return false;
                v[a]=true; 
            }
        }
        int sum=grid[x][y]+grid[x+1][y+1] + grid[x+2][y+2];
        int s2=grid[x][y+2]+grid[x+1][y+1]+grid[x+2][y];
        if(sum!=s2) return false;

        sum=grid[x][y] + grid[x+1][y] + grid[x+2][y];
        s2=0;
        for(int i=y;i<y+3;i++){
            s2=grid[x][i] + grid[x+1][i] + grid[x+2][i];
            if(sum!=s2) return false;
        }
        sum=grid[x][y] + grid[x][y+1] + grid[x][y+2];
        s2=0;
        for(int i=x;i<x+3;i++){
            s2=grid[i][y] + grid[i][y+1] + grid[i][y+2];
            if(sum!=s2) return false;
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int cnt=0;
        if (grid.size() < 3 || grid[0].size() < 3) return 0;
        for(int i=0;i<=grid.size()-3;i++){
            for(int j=0;j<=grid[0].size()-3;j++){
                if(check(grid,i,j)) cnt++;
            }
        }
        return cnt;
        
    }
};