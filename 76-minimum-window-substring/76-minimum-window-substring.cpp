class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(m>n)
            return "";
        int i=0,j=0;
        vector<int>freq(256,0);
        int count=0;
        int ans=INT_MAX;
        int x1=0;
        int x2=0;
        string temp="";
        for(i=0;i<m;i++)
        {
            if(freq[t[i]]==0)
                count++;
            freq[t[i]]++;
        }
        i=0;
        for(j=0;j<n;j++)
        {
            freq[s[j]]--;
            if(freq[s[j]]==0)
                count--;
            if(count==0)
            {
                while(count==0)
                {
                    int wind=j-i+1;
                    if(ans>wind)
                    {
                        ans=wind;
                        x1=i;
                        x2=j;
                    }
                    freq[s[i]]++;
                    
                    if(freq[s[i]]==1)
                        count++;
                    i++;
                }
            }
        }
        for(int k=x1;k<=x2;k++)
            temp+=s[k];
        if(ans!=INT_MAX)
        return s.substr(x1,ans);
        else
            return "";
    }
};