class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int len=0;
        int i;
        int j=0;
        int max1=0;
        vector<int>freq(256,0);
        for(i=0;i<n;i++)
        {
            freq[s[i]]++;
            max1=max(max1,freq[s[i]]);
            int windsize=i-j+1;
            if(windsize-max1>k)
            {
                freq[s[j]]--;
                j++;
            }
            len=max(len,i-j+1);
            
        }
        return len;
    }
};