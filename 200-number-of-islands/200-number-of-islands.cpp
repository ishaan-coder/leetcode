class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j;
        int count=0;
        queue<pair<int,int>>q;
        int x,y;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                
                if(grid[i][j]=='1')
                {
                     count++;
                    q.push({i,j});
                      grid[i][j]='0';
                    while(!q.empty())
                    {
                        pair<int,int>temp=q.front();
                        int x1=temp.first;
                        int x2=temp.second;
                        q.pop();
                        if(x1+1<n && grid[x1+1][x2]=='1')
                        {
                         q.push({(x1+1),x2});   
                              grid[x1+1][x2]='0';
                        }
                        if(x1-1>=0 && grid[x1-1][x2]=='1')
                        {
                            q.push({x1-1,x2});
                              grid[x1-1][x2]='0';
                        }
                        if(x2+1<m && grid[x1][x2+1]=='1')
                        {
                            q.push({x1,x2+1});
                              grid[x1][x2+1]='0';
                        }
                        if(x2-1>=0 && grid[x1][x2-1]=='1')
                        {
                            q.push({x1,x2-1});
                              grid[x1][x2-1]='0';
                        }
                    }
                    
                   
                }
            }
        }
        return count;
        
    }
};