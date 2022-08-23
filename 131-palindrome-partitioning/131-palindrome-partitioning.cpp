class Solution {
public:
    bool isPallindrome(string s,int left,int right)
    {
        while(left<=right)
        {
            if(s[left++]!=s[right--])
                return false;
        }
        return true;
    }
    void FindWays(vector<vector<string>>&ans,vector<string>&temp,string s,int ind)
    {
        if(ind==s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<s.size();i++)
        {
            if(isPallindrome(s,ind,i))
            {
                temp.push_back(s.substr(ind,i-ind+1));
                FindWays(ans,temp,s,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        FindWays(ans,temp,s,0);
        return ans;
        
    }
};