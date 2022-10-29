class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int c=0;
        for(auto x:mp)
        {
            nums[c++]=x.first;
        }
        return c;
    }
};