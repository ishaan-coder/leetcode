class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
        return(a.second>b.second);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int>s;
        int n=nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            s[nums[i]]++;
        }
        vector<pair<int,int>>temp(s.begin(),s.end());
        sort(temp.begin(),temp.end(),comp);
        vector<int>ans;
        for(i=0;i<k;i++)
        {
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};