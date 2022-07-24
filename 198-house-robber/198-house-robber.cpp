class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int sum_even=0;
        int sum_odd=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                sum_even=max(sum_odd,sum_even+nums[i]);
            else
                sum_odd=max(sum_even,sum_odd+nums[i]);
        }
        return max(sum_even,sum_odd);
    }
};