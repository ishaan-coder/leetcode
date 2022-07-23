class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int min1=nums[0];
        int max1=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
                swap(max1,min1);
            min1=min(min1*nums[i],nums[i]);
            max1=max(max1*nums[i],nums[i]);
            ans=max(max1,ans);
        }
            return ans;
        
    }
};