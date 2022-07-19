class Solution {
public:
    void solve(int col,vector<vector<string>>&ans,vector<string>&board,vector<int>&leftrow,vector<int>&upperdig,vector<int>&lowerdig,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(leftrow[row]==0 && upperdig[n-1+col-row]==0 && lowerdig[col+row]==0)
            {
                leftrow[row]=1;
                board[row][col]='Q';
                upperdig[n-1+col-row]=1;
                lowerdig[row+col]=1;
                solve(col+1,ans,board,leftrow,upperdig,lowerdig,n);
                 leftrow[row]=0;
                board[row][col]='.';
                upperdig[n-1+col-row]=0;
                lowerdig[row+col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        vector<int>leftrow(n,0),upperdig(2*n-1,0),lowerdig(2*n-1,0);
        solve(0,ans,board,leftrow,upperdig,lowerdig,n);
        sort(ans.begin(),ans.end());
        return ans;
    }
};