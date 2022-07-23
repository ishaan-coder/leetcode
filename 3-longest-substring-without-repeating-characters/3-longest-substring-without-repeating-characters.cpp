class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        vector<int>freq(256,-1);
        int max1=INT_MIN;
        int i=0,j=0;
        while(j<n)
        {
            
            if(freq[s[i]]!=-1)
            i=max(i,freq[s[j]]+1);
            freq[s[j]]=j;
            max1=max(max1,j-i+1);
    
            j++;
        }
        if(max1!=INT_MIN)
        return max1;
        else
            return 0;
    }
};