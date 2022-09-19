class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int>freq(256,-1);
        int i=0,j=0;
        int maxi=INT_MIN;
        while(j<n)
        {
            if(freq[s[j]]!=-1)
            {
                i=max(i,freq[s[j]]+1);
            }
            freq[s[j]]=j;
            maxi=max(maxi,j-i+1);
            j++;
        }
        if(maxi==INT_MIN)
            return 0;
        return maxi;
    }
};