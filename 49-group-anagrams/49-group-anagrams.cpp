class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        int i=0;
        map<string,vector<string>>mp;
        vector<string>x;
        x=strs;
        for(i=0;i<n;i++)
        {
            string q=strs[i];
            sort(q.begin(),q.end());
            mp[q].push_back(strs[i]);
        }
        vector<vector<string>>temp;
        for(auto it:mp)
        {
        temp.push_back(it.second);
        }
        return temp;
    }
};