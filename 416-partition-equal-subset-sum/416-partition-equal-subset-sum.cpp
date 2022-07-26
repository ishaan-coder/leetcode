class Solution {
public:
    bool getsum(vector<int>&nums,int n,int target)
    {
       
        vector<vector<bool>>dp(n,vector<bool>(target+1,false));
        int i,j;
        for(i=0;i<n;i++)
        {
            dp[i][0]=true;
        }
        if(nums[0]<=target)
        dp[0][nums[0]]=true;
        for(i=1;i<n;i++)
        {
            for(j=1;j<=target;j++)
            {
                bool nottake=dp[i-1][j];
                bool take=false;
                if(j>=nums[i])
                    take=dp[i-1][j-nums[i]];
                dp[i][j]=nottake||take;
            }
        }
        return dp[n-1][target];
            
    }
    bool canPartition(vector<int>& nums) {
     int n=nums.size();
         if(n==1)
            return false;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum%2==1)
            return false;
        if(getsum(nums,n,sum/2))
            return true;
        else
            return false;
    }
};