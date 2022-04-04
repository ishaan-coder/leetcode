class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int prod=1;
        int i=0;
        int sign=1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {sign=1;
             prod=prod*sign;}
            else if(nums[i]<0)
            {sign=-1;
             prod=prod*sign;
            }
            else 
                return 0;
        }
        if(prod>0)
            return 1;
        else if(prod<0)
            return -1;
        else
            return 0;
    }
};