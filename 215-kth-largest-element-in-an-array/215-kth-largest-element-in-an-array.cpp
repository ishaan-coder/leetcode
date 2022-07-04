class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int y=1;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=0;i--)
        {
            if(y==k)
                return nums[i];
            y++;
        }
        return -1;
    }
};