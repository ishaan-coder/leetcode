class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
                left[i]=-1;
            else if(!st.empty() && heights[st.top()]<heights[i])
            {
                left[i]=st.top();
            }
            else if(!st.empty() && heights[st.top()]>=heights[i])
            {
                while(!st.empty() && heights[st.top()]>=heights[i])
                {
                    st.pop();
                }
                if(st.empty())
                    left[i]=-1;
                else
                    left[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        
         for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
                right[i]=n;
            else if(!st.empty() && heights[st.top()]<heights[i])
            {
                right[i]=st.top();
            }
            else if(!st.empty() && heights[st.top()]>=heights[i])
            {
                while(!st.empty() && heights[st.top()]>=heights[i])
                {
                    st.pop();
                }
                if(st.empty())
                    right[i]=n;
                else
                    right[i]=st.top();
            }
             st.push(i);
        }
    
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int width=right[i]-left[i]-1;
            ans=max(ans,width*heights[i]);
        }
        return ans;
    }
};