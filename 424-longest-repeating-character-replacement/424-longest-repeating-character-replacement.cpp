class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        int len=0;
        vector<int>freq(256,0);
        int max1=0;
        for(j=0;j<n;j++)
        {
            freq[s[j]]++;
            max1=max(max1,freq[s[j]]);
            int wind=j-i+1;
            if(wind-max1>k)
            {
                freq[s[i]]--;
                i++;

            }
            wind=j-i+1;
            len=max(wind,len);
        }
        return len;
    }
};