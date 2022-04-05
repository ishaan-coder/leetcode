class Solution {
public:
    bool isValid(int x,int y,int n,int m)
    {
        if(x>=0 && x<n && y>=0 && y<m)
            return true;
        else
            return false;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        pair<int,int>d;
        d.first=-1;
        d.second=-1;
        queue<pair<int,int>>q;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        int ans=-1;
        while(!q.empty())
        {
            int x=q.size();
            while(x--)
            {
                pair<int,int>temp=q.front();
                  q.pop();
                if(isValid(temp.first+1,temp.second,n,m) && grid[temp.first+1][temp.second]==1)
                {
                    q.push({temp.first+1,temp.second});
                    grid[temp.first+1][temp.second]=2;
                }
                 if(isValid(temp.first-1,temp.second,n,m) && grid[temp.first-1][temp.second]==1)
                {
                    q.push({temp.first-1,temp.second});
                    grid[temp.first-1][temp.second]=2;
                }
                  if(isValid(temp.first,temp.second+1,n,m) && grid[temp.first][temp.second+1]==1)
                {
                    q.push({temp.first,temp.second+1});
                    grid[temp.first][temp.second+1]=2;
                }
                 if(isValid(temp.first,temp.second-1,n,m) && grid[temp.first][temp.second-1]==1)
                {
                    q.push({temp.first,temp.second-1});
                    grid[temp.first][temp.second-1]=2;
                }
              
                
            }
            ans++;
                
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        if(ans==-1)
        return 0;
        
        return ans;
    }
};