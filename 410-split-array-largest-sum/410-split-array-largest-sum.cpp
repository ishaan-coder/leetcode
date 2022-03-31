class Solution {
public:
    bool isPossible(vector<int>&nums,int m,int maxSum)
    {
        int sum=0;
        int count=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxSum)
                return false;
            if(sum+nums[i]>maxSum)
            {
                count++;
                sum=nums[i];
                if(count>m)
                    return false;
            }
            else
            {
                sum+=nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        int sum=0;
        int i;
        for(i=0;i<n;i++)
            sum+=nums[i];
       
        int max1=0;
        for(i=0;i<n;i++)
            max1=max(nums[i],max1);
        int low=max1;
        int high=sum;
        int curr_sum;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isPossible(nums,m,mid))
            {
                curr_sum=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return curr_sum;
    }
};