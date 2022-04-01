class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size();
      
        int min_diff=INT_MAX;
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                              
                if(min_diff>abs(x-points[i][0])+abs(y-points[i][1]))
                {
                    idx=i;
                    min_diff=abs(x-points[i][0])+abs(y-points[i][1]);
                    
                }
            }
        }
        return  idx;
    }
};