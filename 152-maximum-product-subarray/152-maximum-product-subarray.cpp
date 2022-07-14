class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int num1=nums[0];
        int num2=nums[0];
        int ans=nums[0];
        for(i=1;i<n;i++)
        {
            if(nums[i]<0)
                swap(num1,num2);
            num1=max(num1*nums[i],nums[i]);
            num2=min(num2*nums[i],nums[i]);
            ans=max(ans,num1);
        }
        ans=max(ans,num1);
        return ans;
    }
};