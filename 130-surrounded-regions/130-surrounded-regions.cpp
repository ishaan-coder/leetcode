class Solution {
public:
   void dfs(vector<vector<char>>&board,int i,int j,int m,int n)
    {
            if(i<0 || i>n-1||j<0||j>m-1||board[i][j]!='O')
                return;
        board[i][j]='V';
        dfs(board,i+1,j,m,n);
        dfs(board,i-1,j,m,n);
        dfs(board,i,j+1,m,n);
        dfs(board,i,j-1,m,n);
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        int i=0,j=0;
        for(i=0;i<m;i++)
        {
            if(board[0][i]=='O')
            {
                dfs(board,0,i,m,n);
            }
            if(board[n-1][i]=='O')
                dfs(board,n-1,i,m,n);
        }
        for(i=0;i<n;i++)
        {
            if(board[i][0]=='O')
            {
                dfs(board,i,0,m,n);
            }
            if(board[i][m-1]=='O')
            {
                dfs(board,i,m-1,m,n);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
                if(board[i][j]=='V')
                    board[i][j]='O';
            }
        }
        
        
            
    }

};