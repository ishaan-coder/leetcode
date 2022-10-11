class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       int c1=INT_MAX;
        int c2=INT_MAX;
        int temp;
        for(int i=0;i<nums.size();i++)
        {
            temp=nums[i];
            if(temp<=c1)
            {
                c1=temp;
            }
            else if(temp<=c2)
            {
                c2=temp;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};