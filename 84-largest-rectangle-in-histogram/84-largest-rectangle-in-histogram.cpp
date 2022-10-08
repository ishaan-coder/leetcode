class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<pair<int,int>>st;
        stack<pair<int,int>>st2;
        vector<int>left(n,0);
        vector<int>right(n,0);
        vector<int>width(n);
        int ans=0; 
        for(int i=0;i<n;i++)
        {
            if(st.size()==0)
            {
                left[i]=-1;
            }
            else if(st.size()>0 && heights[st.top().second]<heights[i])
            {
                left[i]=st.top().second;
            }
            else if(st.size()>0 && heights[st.top().second]>=heights[i])
            {
                while(st.size()>0 && heights[st.top().second]>=heights[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                    left[i]=-1;
                else
                    left[i]=st.top().second;
            }
            st.push({heights[i],i});
            
        }
        for(int i=n-1;i>=0;i--)
        {
            if(st2.size()==0)
            {
                right[i]=n;
            }
            else if(st2.size()>0 && heights[st2.top().second]<heights[i])
            {
                right[i]=st2.top().second;
            }
            else if(st2.size()>0 && heights[st2.top().second]>=heights[i])
            {
                while(st2.size()>0 && heights[st2.top().second]>=heights[i])
                {
                    st2.pop();
                }
                if(st2.size()==0)
                    right[i]=n;
                else
                    right[i]=st2.top().second;
            }
            st2.push({heights[i],i});
            
        }
        for(int i=0;i<n;i++)
            width[i]=right[i]-left[i]-1;
        
        for(int i=0;i<n;i++)
        {
            ans=max(ans,width[i]*heights[i]);
        }
        return ans;
        
        
    }
};