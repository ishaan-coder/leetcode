class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int i=0;
        vector<int>freq(256,0);
        int max1=0;
        int ans=0;
        for(int j=0;j<n;j++)
        {
            freq[s[j]-'A']++;
            max1=max(max1,freq[s[j]-'A']);
            int wind=j-i+1;
            if(wind-max1>k)
            {
                freq[s[i]-'A']--;
                i++;
            }
            wind=j-i+1;
            ans=max(ans,wind);
        }
        return ans;
    }
};