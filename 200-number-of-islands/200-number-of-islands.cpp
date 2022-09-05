class Solution {
public:
    void bfs(vector<vector<int>>&vis,vector<vector<char>>&grid,int row,int col)
    {
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int delr=-1;delr<=1;delr++)
            {
                for(int delc=-1;delc<=1;delc++)
                {
                     if((delr==-1&&delc==-1) || (delr==-1&&delc==1) || (delr==1&&delc==-1) || (delr==1&&delc==1)){
                        continue;
                    }
                    int delrow=delr+row;
                    int delcol=delc+col;
                    if(delrow>=0 && delrow<n && delcol>=0 && delcol<m && !vis[delrow][delcol] && grid[delrow][delcol]=='1')
                    {
                         vis[delrow][delcol]=1;
                        q.push({delrow,delcol});
                       
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                
                if(!vis[i][j] && grid[i][j]=='1')
                {
                   cnt++;
                    bfs(vis,grid,i,j);
                }
            }
        }
        return cnt;
    }
};