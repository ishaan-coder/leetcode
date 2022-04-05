class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        int x0=coordinates[0][0];
        int y0=coordinates[0][1];
        int x1=coordinates[1][0];
        int y1=coordinates[1][1];
        int dx=x1-x0;
        int dy=y1-y0;
        for(int i=2;i<n;i++)
        {
            auto p = coordinates[i];
		if( dx*(p[1] - coordinates[0][1]) != dy*(p[0] - coordinates[0][0]) )
			return false;
        }
        return true;
    }
};