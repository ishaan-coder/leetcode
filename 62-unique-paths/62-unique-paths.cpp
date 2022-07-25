class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];
        dp[0][0]=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                    dp[i][j]=1;
                else
                {int up=0;
                 int down=0;
                if(i>0)
                    up=dp[i-1][j];
                 if(j>0)
                     down=dp[i][j-1];
                 dp[i][j]=up+down;
                }
                
            }
        }
        return dp[m-1][n-1];
    }
};