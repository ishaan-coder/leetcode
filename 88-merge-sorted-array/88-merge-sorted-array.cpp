class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int>temp1;
        vector<int>temp2;
        for(i=0;i<m;i++)
        {
            temp1.push_back(nums1[i]);
        }
        for(j=0;j<n;j++)
        {
            temp2.push_back(nums2[j]);
        }
        i=0,j=0;
        int k=0;
        while(i<m && j<n)
        {
            if(temp1[i]<temp2[j])
            {
                nums1[k++]=temp1[i++];
            }
            else if(temp1[i]==temp2[j])
            {
                nums1[k++]=temp1[i++];
                nums1[k++]=temp2[j++];
            }
            else
            {
                nums1[k++]=temp2[j++];
            }
        }
        while(i<m)
        {
            nums1[k++]=temp1[i++];;
        }
        while(j<n)
        {
            nums1[k++]=temp2[j++];
        }
    }
};