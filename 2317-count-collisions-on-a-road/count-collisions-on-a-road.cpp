class Solution {
public:
    int countCollisions(string dir) {
        int i=0;
        int j=dir.size()-1;
        while(i<dir.size()){
            if(dir[i]=='L') i++;
            else break;
        }
        while(j>=0){
            if(dir[j]=='R') j--;
            else break;
        }
        int cnt=0;
        while(i<=j){
            if(dir[i]!='S') cnt++;
            i++;
        }
        return cnt;
    }
};