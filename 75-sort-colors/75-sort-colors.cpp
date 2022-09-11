class Solution {
public:
    void sortColors(vector<int>& nums) {
     int n=nums.size();
        int low=0;
        int mid=0;
        int high=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                low++;
            }
            else if(nums[i]==2)
            {
                high++;
            }
            else
                mid++;
        }
        int k=0;
        while(low--)
        {
            nums[k++]=0;
        }
        while(mid--)
        {
            nums[k++]=1;
        }
        while(high--)
        {
            nums[k++]=2;
        }
        
    }
};