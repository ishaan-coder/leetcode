class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i,j;
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+(high-low)/2);
            while(low<mid && nums[low]==nums[mid])
                low++;
            while(high>mid && nums[high]==nums[mid])
                high--;
            if(nums[mid]==target)
                return true;
            
            if(nums[low]<=nums[mid])
            {
                
                if(nums[low]<=target && nums[mid]>target)
                    high=mid-1;
                else
                    low=mid+1;
            }
            else
            {
                if(nums[mid]<target && nums[high]>=target)
                {
                    low=mid+1;
                }
                else
                    high=mid-1;
            }
            
        }
        return false;
    }
};