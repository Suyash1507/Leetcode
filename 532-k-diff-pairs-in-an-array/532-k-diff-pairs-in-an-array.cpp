class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
       for(auto it: mp){
           int number= it.first;
           int key= number+k;
           if(k==0){
               if(it.second>1){
                   count++;
               }
           }
           else if(mp.find(key)!=mp.end()){
               count++;
           }
       }
        return count;
   }
};