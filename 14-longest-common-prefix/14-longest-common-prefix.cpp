class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n=strs[0].size();
        int i;
        string ans="";
        for(i=0;i<n;i++)
        {
            char ch=strs[0][i];
            int j;
            int len;
            bool flag=true;
            for(j=1;j<strs.size();j++)
            {
                if(strs[j].size()<i || strs[j][i]!=ch)
                {
                    flag=false;
                    break;
                }
            }
            if(flag==false)
                break;
            else
                ans+=ch;
                
        }
        return ans;
    }
};