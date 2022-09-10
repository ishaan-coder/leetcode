class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==1)
            {
            q.push({i,0});
                vis[i][0]=1;
            }
            if(grid[i][m-1]==1)
            {
                q.push({i,(m-1)});
                vis[i][m-1]=1;
            }
             
        }
        for(int j=0;j<m;j++)
        {
            if(grid[0][j]==1 && vis[0][j]==0)
            {
                q.push({0,j});
                vis[0][j]=1;
            }
            if(grid[n-1][j]==1 && vis[n-1][j]==0)
            {
                vis[n-1][j]=1;
                q.push({(n-1),j});
            }
        }
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            vector<int>dx={-1,1,0,0};
            vector<int>dy={0,0,-1,1};
            for(int i=0;i<4;i++)
            {
                int delrow=row+dx[i];
                int delcol=col+dy[i];
                if(delrow>=0 && delrow<n && delcol>=0 && delcol<m && grid[delrow][delcol]==1 && vis[delrow][delcol]==0)
                {
                    q.push({delrow,delcol});
                    vis[delrow][delcol]=1;
                }
            }
            
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==0)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};