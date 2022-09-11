class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        ans[0]=1;
        ans[rowIndex]=1;
        long res=1;
        for(int i=0;i<rowIndex;i++)
        {
            res*=(rowIndex-i);
            res/=(i+1);
            ans[i+1]=res;
        }
        return ans;
    }
};