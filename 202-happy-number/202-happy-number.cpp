class Solution {
public:
    bool isHappy(int n) {
        int x=n;
        long long  sum=0;
        while(x>1)
        {
            while(n>0)
            {
                int a=n%10;
                sum+=pow(a,2);
                n=n/10;
            }
            x=sum;
            n=sum;
            if(sum==4)
                return false;
            sum=0;
        }
        if(x==1)
            return true;
        else
            return false;
        
    }
};