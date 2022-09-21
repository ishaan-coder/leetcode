class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int q=queries.size();
        vector<int>ans;
        int sum=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                sum+=nums[i];
                mp[i]=nums[i];
            }
        }
        for(int i=0;i<q;i++)
        {
            nums[queries[i][1]]+=queries[i][0];
            // cout<<nums[queries[i][1]];
            if(mp.find(queries[i][1])!=mp.end())
            {
                // cout<<nums[queries[i][1]];
                if(nums[queries[i][1]]%2==0)
                {
                    // cout<<nums[queries[i][1]];
                    sum-=mp[queries[i][1]];
                    // cout<<sum;
                    sum+=nums[queries[i][1]];
                    // cout<<sum;
                    mp[queries[i][1]]=nums[queries[i][1]];
                }
                else
                {
                    sum-=mp[queries[i][1]];
                    mp.erase(queries[i][1]);
                }
            }
            else
            {
                if(nums[queries[i][1]]%2==0)
                {
                    sum+=nums[queries[i][1]];
                    mp[queries[i][1]]=nums[queries[i][1]];
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};