class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int max1=nums[0];
        int min1=nums[0];
        int ans=nums[0];
        for(i=1;i<n;i++)
        {
            if(nums[i]<0)
            {
                swap(max1,min1);
            }
            max1=max(nums[i]*max1,nums[i]);
            min1=min(nums[i]*min1,nums[i]);
            ans=max(ans,max1);
            
        }
        return ans;
    }
};