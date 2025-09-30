class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int m=numRows;
        vector<vector<int>> mat;
        for(int i=0;i<m;i++){
            vector<int>a(i+1);
            mat.push_back(a);
            for(int j=0;j<=i;j++){
                if(i==j) mat[i][j]=1;
                else if(j==0) mat[i][j]=1;
                else mat[i][j]+=mat[i-1][j-1]+mat[i-1][j];
            }
        }
        return mat;

        
    }
};