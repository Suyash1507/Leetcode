class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int a;
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                a=i;
                break;
            }
        }
        return a;
    }
};