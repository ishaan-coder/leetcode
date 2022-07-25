class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==0 && j==0)
                    dp[i][j]=grid[i][j];
                else
                {
                    int up=INT_MAX;
                    int down=INT_MAX;
                    if(i>0)
                        up=grid[i][j]+dp[i-1][j];
                    if(j>0)
                        down=grid[i][j]+dp[i][j-1];
                    dp[i][j]=min(up,down);
                }
            }
        }
        return dp[n-1][m-1];
    }
};