class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        stack<int>st;
        vector<int>temp(n,-1);
        for(int i=2*n-1;i>=0;i--)
        {
           while(!st.empty() && st.top()<=nums[i%n])
           {
               st.pop();
           }
            if(i<n)
            {
                if(!st.empty())
                temp[i]=st.top();
            }
            st.push(nums[i%n]);
        }
        return temp;
    }
};