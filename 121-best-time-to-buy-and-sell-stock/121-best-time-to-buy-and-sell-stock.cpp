class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int i,j;
        int max1=INT_MAX;
        int ans=0;
        for(i=0;i<n;i++)
        {
            max1=min(max1,prices[i]);
            ans=max(ans,prices[i]-max1);
        }
        return ans;
    }
};