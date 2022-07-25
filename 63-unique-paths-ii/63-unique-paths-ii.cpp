class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1)
            return 0;
        vector<vector<int>>dp(n,vector<int>(m,0));
        dp[0][0]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 && j==0)
                    dp[i][j]=1;
                else
                {
                    int up=0;
                    int down=0;
                    if(i>0 && obstacleGrid[i][j]!=1)
                    {
                        up=dp[i-1][j];
                    }
                    if(j>0 && obstacleGrid[i][j]!=1)
                    {
                        down=dp[i][j-1];
                    }
                    dp[i][j]=up+down;
                }
            }
        }
        return dp[n-1][m-1];
    
    }
};