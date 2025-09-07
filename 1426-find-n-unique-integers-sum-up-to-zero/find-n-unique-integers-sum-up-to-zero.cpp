class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>arr;
        for(int i=1;i<=n/2;i++){
            arr.push_back(i);
        }

        if(n%2==0){
            for(int i=n/2+1;i<=n;i++){
                arr.push_back(-(n-i+1));
            }
        }
        else{
            for(int i=n/2+2;i<=n;i++){
                arr.push_back(-(n-i+1));
            }

            arr.push_back(0);
        }

        return arr;
    }
};