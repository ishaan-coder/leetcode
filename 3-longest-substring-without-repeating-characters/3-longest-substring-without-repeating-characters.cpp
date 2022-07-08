class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        int ans=0;
        vector<int>freq(256,-1);
        while(j<n)
        {   if(freq[s[j]]!=-1)
            i=max(i,freq[s[j]]+1);
         freq[s[j]]=j;
            ans=max(ans,j-i+1);
         j++;
        }
        return ans;
    }
};