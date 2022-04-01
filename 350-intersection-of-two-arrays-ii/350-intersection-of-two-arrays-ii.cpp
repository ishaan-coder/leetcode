class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int>temp;
        int n=nums1.size();
        int m=nums2.size();
        if(n==1 && m==1)
        {
            if(nums1[0]==nums2[0])
            {
                temp.push_back(nums1[0]);
                return temp;
            }
            else
                return temp;
        }
        
            while(i<n && j<m )
            {
                if(nums1[i]==nums2[j])
                {
                    temp.push_back(nums1[i]);
                    i++;
                    j++;
                }
                 else if(nums1[i]<nums2[j])
                {
                    i++;
                }
                else
                {
                    
                    j++;
                }
            }
        
   
        return temp;
        
    }
};