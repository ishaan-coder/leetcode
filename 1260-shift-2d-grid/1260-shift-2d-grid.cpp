class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int n=grid.size();
        int m=grid[0].size();
        int i=0,j=0;
        vector<int>temp;
       // int k=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                temp.push_back(grid[i][j]);
                    
              }
        }
        if(temp.size()<k)
            k=k%temp.size();
        reverse(temp.begin(),temp.end());
        reverse(temp.begin(),temp.begin()+k);
        reverse(temp.begin()+k,temp.end());
        
        int o = 0;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                grid[i][j] = temp[o];
                o++;
              }
        }
        
        return grid;
    }
};