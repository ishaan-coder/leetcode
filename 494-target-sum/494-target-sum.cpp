class Solution {
public:
    int findWays(vector<int>&nums,int i,int tar,vector<vector<int>>&dp)
    {
        
        if(i==0)
        {
            if(tar==0 && nums[i]==0)
                return 2;
            if(tar==0 || tar==nums[0])
                return 1;
            else
                return 0;
        
        }
        if(dp[i][tar]!=-1)
            return dp[i][tar];
        int up=findWays(nums,i-1,tar,dp);
        int down=0;
        if(nums[i]<=tar)
            down=findWays(nums,i-1,tar-nums[i],dp);
        return dp[i][tar]=up+down;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int i;
        
        int tsum=0;
        for(i=0;i<n;i++)
            tsum+=nums[i];
        if((tsum-target)%2==1)
            return 0;
        if(tsum-target<0)
            return 0;
        int s2=(tsum-target)/2;
        vector<vector<int>>dp(n,vector<int>(s2+1,-1));
        return findWays(nums,n-1,s2,dp);
    }
};