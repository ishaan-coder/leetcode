class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i;
        int id1=INT_MIN,id2;
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]>=nums[i+1])
                continue;
            else
            {
                id1=i;
                break;
            }
        }
        if(id1==INT_MIN)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(i=n-1;i>=0;i--)
        {
            if(nums[id1]<nums[i])
            {
                id2=i;
                break;
            }
        }
        swap(nums[id1],nums[id2]);
        i=id1+1;
        int j=n-1;
        while(i<j)
        {
            swap(nums[i++],nums[j--]);
        }
    }
};