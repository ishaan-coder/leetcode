class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
        int i;
       int max1=prices[0];
        int ans=0;
        for(i=1;i<n;i++)
        {
             max1=min(max1,prices[i]);
            ans=max(ans,prices[i]-max1);
        }
        return ans;
    }
};