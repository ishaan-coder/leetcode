class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>x(m,vector<int>(n));
        int i;
        int y=original.size();
        if(m*n!=y)
            return vector<vector<int>>();
        for(i=0;i<y;i++)
        {
            x[i/n][i%n]=original[i];
        }
        return x;
    }
};