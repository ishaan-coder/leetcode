class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        if(nums[high]>nums[low])
        {
            return nums[0];
        }
        if(high==low)
            return nums[low];
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid<high && nums[mid+1]<nums[mid])
                return nums[mid+1];
            else if(mid>low && nums[mid-1]>nums[mid])
                return nums[mid];
               else if(nums[mid]>nums[high])
               {
                   low=mid+1;
               }
               else
               {
                   high=mid-1;
               }
        }
               return -1;
    }
};