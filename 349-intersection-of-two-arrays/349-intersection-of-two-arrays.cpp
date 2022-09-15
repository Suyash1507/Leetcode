class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]= true;
        }
        set<int> s;
        for(int i=0;i<nums2.size();i++){
            if(mp.find(nums2[i])!=mp.end()){
                s.insert(nums2[i]);
            }
        }
        vector<int> some_vector(s.begin(), s.end());
        return some_vector;
    }
};