class Solution {
public:
    void FindWays(int i,string &digits,string &s,vector<string>&ans)
    {
        vector<string>temp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.size()==i)
        {
            ans.push_back(s);
            return;
        }
        for(auto x:temp[digits[i]-'0'])
        {
            s+=x;
            FindWays(i+1,digits,s,ans);
            s.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        string s="";
        vector<string>ans;
        if(digits.size()==0)
            return ans;
        FindWays(0,digits,s,ans);
        return ans;
    }
};