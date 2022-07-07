class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        string temp="";
        for(i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
                temp+=s[i];
            }
            else if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9')
            {
                temp+=s[i];
            }
        }
        i=0;
        j=temp.size()-1;
        
        cout<<temp;
        while(i<=j)
        {   
            if(temp[i]==temp[j])
            {
                i++;
                j--;
            }
            else
                return false;
        }
        return true;
    }
};