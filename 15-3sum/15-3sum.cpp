class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int i=0,j=0,k=0;
        for(i=0;i<n-2;i++)
        {
            if(i==0||(i>0 && nums[i]!=nums[i-1]))
            {
          
                j=i+1;
                k=n-1;
            while(j<k)
            {
                if(nums[j]+nums[k]+nums[i]==0)
                {
                      vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    
                    while(j<k && nums[j]==nums[j+1])
                    j++;
                while(j<k && nums[k]==nums[k-1])
                    k--;
                    j++;
                    k--;
                }
                
                else if(nums[i]+nums[j]+nums[k]>0)
                    k--;
                else
                    j++;
                }
                    
            }
        }
        return ans;
    }
};