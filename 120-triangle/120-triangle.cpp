class Solution {
public:
    int mint(int i,int j,vector<vector<int>>&triangle,int n,int m,vector<vector<int>>&dp)
    {
        if(i>=n ||j>=triangle[i].size())
            return 0;
        if(i==n-1)
            return triangle[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int up=mint(i+1,j,triangle,n,m,dp)+triangle[i][j];
        int down=mint(i+1,j+1,triangle,n,m,dp)+triangle[i][j];
        dp[i][j]=min(up,down);
        return dp[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
       
        int n=triangle.size();
        int m=triangle[0].size();
         vector<vector<int>>dp(n,vector<int>(n,0));
        for(int j=0;j<n;j++)
            dp[n-1][j]=triangle[n-1][j];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
              
              
                int t1=dp[i+1][j]+triangle[i][j];
                int t2=dp[i+1][j+1]+triangle[i][j];
                dp[i][j]=min(t1,t2);
            }
        }
        return dp[0][0];
    }
};