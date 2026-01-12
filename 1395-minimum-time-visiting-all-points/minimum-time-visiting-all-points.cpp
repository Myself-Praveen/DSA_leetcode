class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int sum=0;
        for(int i=1;i<n;i++){
            int x=points[i][0]-points[i-1][0];
            int y=points[i][1]-points[i-1][1];
            int a=max(abs(x),abs(y));
            sum+=a;
        }
        return sum;
    }
};