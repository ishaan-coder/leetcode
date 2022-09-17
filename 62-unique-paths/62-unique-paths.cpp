class Solution {
public:
    int FindWays(int i,int j,int m,int n,vector<vector<int>>&memo)
    {
        if(i>=m || j>=n)
            return 0;
        if(i==m-1 && j==n-1)
            return 1;
        if(memo[i][j]!=-1)
            return memo[i][j];
        
        else return memo[i][j]=FindWays(i,j+1,m,n,memo)+FindWays(i+1,j,m,n,memo);
        
    }
    int uniquePaths(int m, int n) {
         vector<vector<int>>memo(m+1,vector<int>(n+1,-1));
        int x=FindWays(0,0,m,n,memo);
        if(m==1 && n==1)
            return x;
        
        return memo[0][0];
    }
};