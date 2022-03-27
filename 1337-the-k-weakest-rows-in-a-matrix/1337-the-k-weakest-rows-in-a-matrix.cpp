class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        int i,j;
        vector<pair<int,int>>temp;
        int sol_count;
        int civilian_count;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                    sol_count++;
            }
            temp.push_back({sol_count,i});
            sol_count=0;
        }
        sort(temp.begin(),temp.end());
        vector<int>x;
        for(i=0;i<k;i++)
        {
            x.push_back(temp[i].second);
                
        }
        return x;
        
    }
};