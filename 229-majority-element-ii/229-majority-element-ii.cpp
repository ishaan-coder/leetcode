class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int i;
        int c1=0,c2=0;
        int p1=-1;
        int p2=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==p1)
            {
                c1++;
            }
            else if(nums[i]==p2)
                c2++;
            else if(c1==0)
            {
                p1=nums[i];
                c1=1;
            }
            else if(c2==0)
            {
                p2=nums[i];
                c2=1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==p1)
            c1++;
            else if(nums[i]==p2)
            c2++;
        }
        if(c1>n/3)
            temp.push_back(p1);
        if(c2>n/3)
            temp.push_back(p2);
        return temp;
            
    }
};