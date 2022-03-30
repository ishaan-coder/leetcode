class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int n=nums.size();
    int maxEnd=nums[0];
    int maxSum=nums[0];
                    for(int i=1;i<n;i++)
                    {
                        maxSum=max(nums[i],maxSum+nums[i]);
                        maxEnd=max(maxSum,maxEnd);
                    }
                    return maxEnd;
    }
};