class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int x=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[x])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                x=i;
                count=1;   
            }
        }
        count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[x]==nums[i])
                count++;
           
        }
         if(count<=n/2)
                return -1;
        return nums[x];
    }
};