class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int freq[26]={0};
        int i;
        for(i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        for(i=0;i<t.size();i++)
        {
            freq[t[i]-'a']--;
        }
        for(i=0;i<26;)
        {
            if(freq[i]==0)
                i++;
            else
                return false;
        }
        return true;
    }
};