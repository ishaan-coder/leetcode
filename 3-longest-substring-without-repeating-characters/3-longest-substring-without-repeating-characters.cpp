class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        vector<int>freq(256,-1);
        int len=0;
        int l=0;
        int r=0;
        while(r<n)
        {
            if(freq[s[r]]!=-1)
            {
                l=max(freq[s[r]]+1,l);
            }
                freq[s[r]]=r;
            
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};