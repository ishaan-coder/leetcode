class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
       int left[n];
        vector<int>right(n,0);
        int width[n];
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++)
        {   
           
            if(st.size()==0)
            {
                
                left[i]=-1;
            }
            else if(st.empty()==false && st.top().first<heights[i])
            {
                left[i]=st.top().second;
            }
            else if(st.size()>0 && st.top().first>=heights[i])
            {
                while(st.empty()==false && st.top().first>=heights[i])
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
        
       
        stack<pair<int,int>>st2;
        for(int i=n-1;i>=0;i--)
        {
            
            if(st2.size()==0)
            {
                right[i]=n;
            }
            else if(st2.empty()==false && st2.top().first<heights[i])
            {
                right[i]=st2.top().second;
            }
           else if(st2.size()>0 && st2.top().first>=heights[i])
            {
                while(st2.empty()==false && st2.top().first>=heights[i])
                {
                    st2.pop();
                }
                if(st2.size()==0)
                    right[i]=n;
                else
                    right[i]=st2.top().second;
            }
            st2.push({heights[i],i});
            // cout<<right[i];
        }
        for(int i=0;i<n;i++)
        {
            // cout<<left[i]<<right[i]<<" ";
            width[i]=right[i]-left[i]-1;
            // cout<<width[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,width[i]*heights[i]);
        }
            return ans;
    }
};