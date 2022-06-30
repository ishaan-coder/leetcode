class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max1=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<n;i++)
        {
            max1=max(nums[i],nums[i]+max1);
            maxSum=max(maxSum,max1);
        }
        return maxSum;
    }
};