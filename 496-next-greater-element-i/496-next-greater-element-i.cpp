class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>temp(nums1.size(),-1);
        int i,j;
        stack<int>st;
        unordered_map<int,int>mp;
         for(i=0;i<m;i++)
         {
             int x=nums2[i];
             while(!st.empty() && x>st.top())
             {
                 mp[st.top()]=x;
                 st.pop();
             }
             st.push(x);
         }
        for(i=0;i<n;i++)
        {
            int x=nums1[i];
            if(mp.find(x)!=mp.end())
            {
                int y=mp[x];
                temp[i]=y;
            }
            
        }
        return temp;
        
}
};