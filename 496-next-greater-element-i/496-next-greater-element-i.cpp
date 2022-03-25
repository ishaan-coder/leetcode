class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>temp;
            int i,j;
            int x;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    cout<<j<<" ";
                  x=j;
                    j++;
                    break;
                }
            }
            cout<<j<<" ";
            int c=-1;
            while(j<m)
            {
                if(nums2[j]>nums2[x])
                {
                    c=nums2[j];
                    break;
                }
                j++;
            }
            temp.push_back(c);
        }
        return temp;
        
}
};