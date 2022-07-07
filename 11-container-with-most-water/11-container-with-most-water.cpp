class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int x=height[0];
        int sum=0;
       
        int j=n-1;
        while(i<j)
        {
            x=(j-i)*min(height[i],height[j]);
            sum=max(sum,x);
            if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                i++;
            }        
        }
       
        return sum;
        
    }
};