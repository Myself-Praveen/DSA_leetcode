class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int c=nums1.size();
        if(c%2!=0){
            return (double)nums1[c/2];
        }
        else{
            int b=c/2;
            double a=(nums1[b]+nums1[b-1])/2.0;
            return a;
        }
    }
};