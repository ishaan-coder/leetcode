class Solution {
public:
    void FindWays(int close,int open,int n,string &s,vector<string>&ans)
    {
        if(s.length()==2*n)
        {
            ans.push_back(s);
            return;
        }
        if(open<n)
        {
            s+='(';
            FindWays(close,open+1,n,s,ans);
            s.pop_back();
        }
        if(close<open)
        {
            s+=')';
            FindWays(close+1,open,n,s,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        int open=0;
        int close=0;
        vector<string>ans;
        if(n==0)
            return ans;
        FindWays(close,open,n,s,ans);
        return ans;
    }
};