class Solution {
public:
    bool checkPallindrome(string s,int i,int j)
    {
        
        int n=s.size();
        if(n==0)
            return false;
        bool f=true;
        while(i<j)
        {
            if(s[i]==s[j])
            {i++;j--;}
            else
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
     int n=s.size();
        
     int i=0,j=n-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
                
            }
            else
            {
                cout<<i<<j;
                
                bool y=checkPallindrome(s,i,j-1);
                bool x=checkPallindrome(s,i+1,j);
                
                if(x==true or y==true)
                    return true;
                else 
                    return false;
            }
        }
          return true;  
            
        }
};