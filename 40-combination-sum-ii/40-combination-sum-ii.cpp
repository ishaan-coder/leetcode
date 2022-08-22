class Solution {
public:
    void FindWays(vector<int>&arr,int target,int ind,vector<int>&temp,vector<vector<int>>&ans)
    {
     
        
            if(target==0)
            {
               ans.push_back(temp);
                return;
            }
            
            
        
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1])
                continue;
            if(arr[i]>target)
                break;
        
            temp.push_back(arr[i]);
            FindWays(arr,target-arr[i],i+1,temp,ans);
            temp.pop_back();   
        }
      
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     vector<vector<int>>ans;
    sort(candidates.begin(),candidates.end());
        vector<int>temp;
     FindWays(candidates,target,0,temp,ans);
        return ans;
    }
};