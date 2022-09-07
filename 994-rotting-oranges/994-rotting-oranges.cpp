class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int tm=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {q.push({0,{i,j}});
                    vis[i][j]=1;}
            }
        }
        while(!q.empty())
        {
            int temp=q.front().first;
            tm=max(tm,temp);
            int row=q.front().second.first;
            int col=q.front().second.second;
            q.pop();
            vector<int>dx={-1,0,1,0};
            vector<int>dy={0,1,0,-1};
            for(i=0;i<4;i++)
            {
                int delrow=row+dx[i];
                int delcol=col+dy[i];
                if( delrow>=0 && delrow<n && delcol>=0 && delcol<m && grid[delrow][delcol]==1 && vis[delrow][delcol]==0)
                {
                    q.push({temp+1,{delrow,delcol}});
                    vis[delrow][delcol]=1;
                    grid[delrow][delcol]=2;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        return tm;
        
    }
};