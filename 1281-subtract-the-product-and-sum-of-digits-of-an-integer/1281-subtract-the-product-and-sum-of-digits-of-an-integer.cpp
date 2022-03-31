class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        int m=n;
        while(m>0)
        {
            int x=m%10;
            product*=x;
            m=m/10;
        }
        m=n;
          while(m>0)
        {
            int x=m%10;
            sum+=x;
            m=m/10;
        }
        return product-sum;
        
    }
};