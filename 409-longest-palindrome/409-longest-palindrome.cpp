class Solution {
public:
    int longestPalindrome(string s) {
       int n=s.size();
        int i;
        int count=0;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]%2==0)
            {
                count+=mp[s[i]];
                mp[s[i]]=0;
            }
            
        }
        for(auto x:mp)
        {
            if(x.second==1)
            {
                count++;
                break;
            }
        }
        return count;
    }
};