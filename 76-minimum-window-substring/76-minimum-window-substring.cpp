class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        int i=0;
        int j=0;
        int ans=0;
        int len=INT_MAX;
        vector<int>freq(256,0);
        int count=0;
        for(i=0;i<m;i++)
        {   if(freq[t[i]]==0)
                 count++;
            freq[t[i]]++;
        }
                 i=0;
        while(j<n)
        {
            freq[s[j]]--;
            if(freq[s[j]]==0)
                count--;
            if(count==0)
            {
                while(count==0)
                {
                    if(len>j-i+1)
                    {
                        len=j-i+1;
                        ans=i;
                    }
                    freq[s[i]]++;
                    if(freq[s[i]]==1)
                        count++;
                    i++;
                }
            }
            j++;
        }
                 if(len!=INT_MAX)
                 return s.substr(ans,len);
                 else
                 return "";
                    
    }
};