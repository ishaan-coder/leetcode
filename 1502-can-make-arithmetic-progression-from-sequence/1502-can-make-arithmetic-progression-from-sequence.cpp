class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i,j;
        int diff=arr[0]-arr[1];
        int n=arr.size();
        for(i=1;i<n-1;i++)
        {
            if(diff==arr[i]-arr[i+1])
                continue;
            else
                return false;
        }
        return true;
    }
};