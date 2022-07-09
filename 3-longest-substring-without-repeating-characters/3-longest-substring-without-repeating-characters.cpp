class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        vector<int>freq(256,-1);
        int i=0,j=0;
        int len=0;
        while(j<n)
        {
            if(freq[s[i]!=-1])
            i=max(i,freq[s[j]]+1);
            freq[s[j]]=j;
            len=max(len,j-i+1);
            j++;
            
        }
        return len;
    }
};