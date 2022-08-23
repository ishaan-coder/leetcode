class Solution {
public:
    void FindWays(vector<vector<int>>&ans,vector<int>&nums,vector<int>&temp,int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int j=ind;j<nums.size();j++)
        {
            swap(nums[ind],nums[j]);
                FindWays(ans,nums,temp,ind+1);
            swap(nums[ind],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        FindWays(ans,nums,temp,0);
        return ans;
    }
};