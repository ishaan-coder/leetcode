class Solution {
public:
    void FindWays(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,vector<bool>&freq,int ind)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                freq[i]=true;
                temp.push_back(nums[i]);
                FindWays(nums,ans,temp,freq,i+1);
                freq[i]=false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>freq(nums.size(),false);
        FindWays(nums,ans,temp,freq,0);
        return ans;
    }
};