class Solution {
public:
    void recurPerm(int ind,vector<int>&nums,vector<vector<int>>&ans)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
        }
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[i],nums[ind]);
            recurPerm(ind+1,nums,ans);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        vector<vector<int>>ans;
        recurPerm(0,nums,ans);
        return ans;
    }
};