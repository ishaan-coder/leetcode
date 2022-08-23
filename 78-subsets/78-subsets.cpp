class Solution {
public:
    void FindWays(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int ind)
    {
        ans.push_back(temp);
        for(int i=ind;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            FindWays(nums,ans,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        FindWays(nums,ans,temp,0);
        return ans;
    }
};