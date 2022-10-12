class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        int MOD=1e9+7;
        stack<int>st;
        vector<int>left(n,0);
        vector<int>right(n,0);
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                left[i]=-1;
            }
            else if(!st.empty() && arr[st.top()]<=arr[i])
            {
               left[i]=st.top();
            }
            else if(!st.empty() && arr[st.top()]>arr[i])
            {
                while(!st.empty() && arr[st.top()]>arr[i])
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
        stack<int>st2;
          for(int i=n-1;i>=0;i--)
            {   
            if(st2.empty())
            {
                right[i]=n;
            }
            else if(!st2.empty() && arr[st2.top()]<arr[i])
            {
                right[i]=st2.top();
            }
            else if(!st2.empty() && arr[st2.top()]>=arr[i])
            {
                while(!st2.empty() && arr[st2.top()]>=arr[i])
                {
                    st2.pop();
                }
                if(st2.empty())
                    right[i]=n;
                else
                    right[i]=st2.top();
            }
            
            st2.push(i);
            }
        for(int i=0;i<n;i++)
        {
            left[i]=i-left[i];
            right[i]=right[i]-i;
            // cout<<left[i]<<right[i]<<" ";
        }
        int res = 0;
        for(int i=0; i<n; i++)
        {
            long long prod = (left[i]*right[i])%MOD;
            prod = (prod*arr[i])%MOD;
            res = (res + prod)%MOD;
        }
        
        return res%MOD;
    }
};