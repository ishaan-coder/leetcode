class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        long long int x=0;
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            long long int mid=l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return l;
        
    }
};