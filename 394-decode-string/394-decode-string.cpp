class Solution {
public:
    string decode(string &s,int& i)
    {
        string result="";
        while(i<s.size() && s[i]!=']')
        {
            if(!isdigit(s[i]))
            {
                result+=s[i++];
            }
            else
            {
                int n=0;
                while(i<s.length() && isdigit(s[i]))
                {
                    n=n*10+s[i++]-'0';
                }
                i++;
                string r=decode(s,i);
                i++;
                while(n-->0)
                {
                    result+=r;
                }
            }
        }
        return result;
    }
    string decodeString(string s) {
        int i=0;
        return decode(s,i);
    }
};