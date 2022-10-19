class Solution {
public:
   static  bool comp(pair<string,int>&a,pair<string,int>&b)
    {
       if(a.second!=b.second)
        return a.second>b.second;
       else
           return a.first<b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        vector<pair<string,int>>ans;
        for(auto x:mp)
        {
            ans.push_back({x.first,x.second});
        }
        sort(ans.begin(),ans.end(),comp);
        vector<string>temp;
        for(int i=0;i<k;i++)
        {
            temp.push_back(ans[i].first);
        }
        return temp;
    }
};