class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n= nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int a;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>1){
                a= nums[i];
            }
        }
        return a;
    }
};