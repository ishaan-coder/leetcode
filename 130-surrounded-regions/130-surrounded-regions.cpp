class Solution {
public:
    void solve(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<m;i++)
        {
            if(grid[0][i]=='O')
            {
                q.push({0,i});
                vis[0][i]=1;
            }
             if(grid[n-1][i]=='O')
            {
                q.push({(n-1),i});
                 vis[n-1][i]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(grid[i][0]=='O')
            {
                q.push({i,0});
                vis[i][0]=1;
            }
             if(grid[i][m-1]=='O')
            {
                q.push({i,(m-1)});
                 vis[i][m-1]=1;
            }
        }
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            vector<int>dx={-1,0,0,1};
            vector<int>dy={0,-1,1,0};
            for(int i=0;i<4;i++)
            {
                int delrow=row+dx[i];
                int delcol=col+dy[i];
                if(delrow>=0 && delrow<n && delcol>=0 && delcol<m && vis[delrow][delcol]==0                  && grid[delrow][delcol]=='O')
                {
                    q.push({delrow,delcol});
                    vis[delrow][delcol]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]!='X')
                {
                    grid[i][j]='X';
                }
            }
        }
    }
};