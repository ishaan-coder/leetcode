class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        sort(salary.begin(),salary.end());
        int i,j;
        int sum=0;
        int count=0;
        for(i=1;i<n-1;i++)
        {
            sum+=salary[i];
            count++;
        }
        return (double)sum/count;
    }
};