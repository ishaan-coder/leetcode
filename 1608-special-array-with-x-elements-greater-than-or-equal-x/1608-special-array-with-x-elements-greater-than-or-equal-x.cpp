class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        int max1=0;
        for(i=0;i<n;i++)
        {
            max1=max(nums[i],max1);
        }
       int x=max1;
        while(x>0)
        {
            int count=0;
            for(i=0;i<n;i++)
            {
                
                if(nums[i]>=x)
                    count++;
            }
            if(x==count)
                return x;
            x--;
        }
        return -1;
    }
};