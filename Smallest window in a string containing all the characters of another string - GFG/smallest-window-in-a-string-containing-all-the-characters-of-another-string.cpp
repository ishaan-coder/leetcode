// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        int n=s.size();
        int m=p.size();
        int i=0;
        int freq[256]={0};
        int count=0;
        int len=INT_MAX;
        for(i=0;i<m;i++)
        {
            if(freq[p[i]]==0)
            count++;
            freq[p[i]]++;
        }
        int j=0;
             i=0;
             int y=0;
        while(j<s.length())
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
                    y=i;
                }
                
                    freq[s[i]]++;
                    if(freq[s[i]]==1)
                    {
                        count++;
                    }
                    i++;
                }
                
            }
            j++;
    }
    if(len!=INT_MAX)
    return s.substr(y,len);
    else
    return "-1";
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends