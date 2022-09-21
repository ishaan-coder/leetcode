class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++)
        {
            int low=i+1;
            int high=n-1;
            while(low<high)
            {
                if(nums[low]+nums[high]+nums[i]==0)
                {
                    vector<int>temp(3,0);
                    temp[0]=nums[i];
                    temp[1]=nums[low];
                    temp[2]=nums[high];
                    ans.push_back(temp);
                    while(low<high && temp[1]==nums[low])
                        low++;
                    while(low<high && temp[2]==nums[high])
                        high--;
                }
                else if(nums[low]+nums[high]+nums[i]>0)
                    high--;
                else
                    low++;
            }
            while(i+1<n-2 && nums[i]==nums[i+1])
                i++;
        }
        return ans;
    }
};