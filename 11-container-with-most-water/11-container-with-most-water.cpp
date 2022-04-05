class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int max_water=0;
        int ans=0;
        while(i<j)
        {
            max_water=(j-i)*min(height[i],height[j]);
            ans=max(max_water,ans);
            if(height[j]<height[i])
            {
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};