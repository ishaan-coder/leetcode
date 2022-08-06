class Solution {
public:
    int maxArea(vector<int>& height) {
     int n=height.size();
        int i=0;
        int j=n-1;
        int max1=INT_MIN;
        while(i<j)
        {
            int temp=(j-i)*min(height[i],height[j]);

            max1=max(temp,max1);
            if(height[j]<height[i])
                j--;
            else
                i++;
        }
        return max1;
    }
};