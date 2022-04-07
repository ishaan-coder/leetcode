class Solution {
public:
    int seg1(vector<int>&nums,int n)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            if(abs(nums[i])-1<n && nums[abs(nums[i])-1]>0)
            {
                nums[abs(nums[i])-1]=-1*nums[abs(nums[i])-1];
            }
        }
        for(i=0;i<n;i++)
        {
            if(nums[i]>0)
                return i+1;
            
        }
        return n+1;
    }
    int segregate(vector<int>&nums)
    {
        int i=0;
        int j=0;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i]<=0)
                swap(nums[i],nums[j++]);
        }
        return j;
    }
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int idx=segregate(nums);
        nums.erase(nums.begin(),nums.begin()+idx);
        int y=seg1(nums,n-idx);
        return y;
            }
};