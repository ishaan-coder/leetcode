class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int>ans(n,0);
        ans[0]=nums[0];
        for(i=1;i<n;i++)
        {
            ans[i]=ans[i-1]*nums[i];
        }
        ans[n-1]=ans[n-2];
        int product=nums[n-1];
        for(i=n-2;i>0;i--)
        {
            ans[i]=ans[i-1]*product;
            product*=nums[i];
        }
        ans[0]=product;
        return ans;
        
    }
};