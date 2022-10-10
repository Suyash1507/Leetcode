class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int mini= 1e9;
        int sum=0;
        for(int i=0;i<n;i++){
            mini= min(mini,prices[i]);
            sum= max(sum, prices[i]-mini);
        }
        return sum;
    }
};