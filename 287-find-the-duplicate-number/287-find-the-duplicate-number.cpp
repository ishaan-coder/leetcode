class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i;
        int temp[n+1];
        for(i=0;i<=n;i++)
            temp[i]=0;
        for(i=0;i<n;i++)
        {
            temp[nums[i]]++;
        }
        for(i=0;i<=n;i++)
        {
            if(temp[i]>1)
            return i;
        }
        return -1;
    }
};