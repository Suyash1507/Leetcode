class Solution {
public:
    double median(vector<int> &arr, int size){
        if (size % 2 != 0)
            return (double)arr[size/2];
        return (double)(arr[(size-1)/2] + arr[size/2])/2.0;
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1= nums1.size();
        int n2= nums2.size();
        
        for(int i=0;i<n1;i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<n2;i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int n= ans.size();
        return median(ans,n);
        
        
    }
};