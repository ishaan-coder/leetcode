class Solution {
public:
    void FindWays(vector<int>&arr,int target,vector<vector<int>>&ans,int ind,int sum,vector<int>&temp)
    {
        if(sum>target)
            return;
        if(ind>=arr.size())
        {
            if(sum==target)
            {
                ans.push_back(temp);
            }
            return;
        }
        sum+=arr[ind];
        temp.push_back(arr[ind]);
        FindWays(arr,target,ans,ind,sum,temp);
        sum-=arr[ind];
        temp.pop_back();
        FindWays(arr,target,ans,ind+1,sum,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<vector<int>>ans;
        vector<int>temp;
        FindWays(candidates,target,ans,0,0,temp);
        return ans;
    }
};