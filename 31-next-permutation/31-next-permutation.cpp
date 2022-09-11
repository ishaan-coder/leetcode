class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int indx1=INT_MIN;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                indx1=i;
                break;
            }
        }
       
        if(indx1!=INT_MIN)
        {
             int indx2=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]>nums[indx1])
            {
                indx2=i;
                break;
            }
        }
      
              swap(nums[indx1],nums[indx2]);
        reverse(nums.begin()+indx1+1,nums.end());
        }
        else
            reverse(nums.begin(),nums.end());
    }
};