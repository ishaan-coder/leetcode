class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int i,j=0;
        vector<vector<int>>temp;
       sort(intervals.begin(),intervals.end());
        temp.push_back(intervals[0]);
        for(i=1;i<n;i++)
        {
            if(temp[j][1]>=intervals[i][0])
            {
                temp[j][1]=max(temp[j][1],intervals[i][1]);
            }
            else
            {
                temp.push_back(intervals[i]);
                j++;
            }
        }
        return temp;
    }
};