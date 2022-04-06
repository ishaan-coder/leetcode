class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int i,j;
        int sum=0;
        int max1=INT_MIN;
        for(i=0;i<n;i++)
        {
            for(j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
                
            }
            max1=max(sum,max1);
            sum=0;
        }
        return max1;
    }
};