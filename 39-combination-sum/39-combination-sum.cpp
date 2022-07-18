class Solution {
public:
    void combSum(int i,vector<int>arr,int sum,vector<vector<int>>&ans,vector<int>&temp)
    {
        if(i==arr.size())
        {
            if(sum==0)
            {
                ans.push_back(temp);
            }
            return;
        }
        if(arr[i]<=sum)
        {
            temp.push_back(arr[i]);
            combSum(i,arr,sum-arr[i],ans,temp);
            temp.pop_back();
        }
        combSum(i+1,arr,sum,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        combSum(0,candidates,target,ans,temp);
        return ans;
    }
};