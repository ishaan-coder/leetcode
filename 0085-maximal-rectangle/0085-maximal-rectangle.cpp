class Solution {
public:
      int MAH(vector<int>heights) {
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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i;
        int ans=0;
        vector<int>temp(m,0);
         for(int j=0;j<m;j++)
            {
                if(matrix[0][j]!='0')
                {
                    temp[j]=1;
                }
            }

        int y1=MAH(temp);
        // cout<<y1;
        ans=max(ans,y1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='0')
                {
                    temp[j]=0;
                }
                else
                {
                    temp[j]+=1;
                }
            }
            int y=MAH(temp);
            ans=max(y,ans);
        }
        return ans;
    }
};