class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>temp1(n,0);
        vector<int>temp2(m,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    temp1[i]=1;
                    temp2[j]=1;
                    
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(temp1[i]==1)
            {
                for(int j=0;j<m;j++)
                    matrix[i][j]=0;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(temp2[j]==1)
            {
                for(int i=0;i<n;i++)
                    matrix[i][j]=0;
            }
        }
        
    }
};