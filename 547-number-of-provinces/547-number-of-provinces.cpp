class Solution {
public:
    void bfs(int node,vector<int>&vis,vector<int>adj[])
    {
        queue<int>q;
        q.push(node);
        vis[node]=1;
        while(!q.empty())
        {
            int top=q.front();
            q.pop();
            for(auto x:adj[top])
            {
                if(vis[x]==0)
                {
                    vis[x]=1;
                    q.push(x);
                }
            }
            
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                count++;
                bfs(i,vis,adj);
            }
        }

        return count;
    }
};