class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>leftprev(n,0);
        vector<int>rightprev(n,0);
        vector<int>leftgrt(n,0);
        vector<int>rightgrt(n,0);
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                leftprev[i]=-1;
            }
            else if(!st.empty() && nums[st.top()]<nums[i])
            {
                leftprev[i]=st.top();
            }
            else if(!st.empty() && nums[st.top()]>=nums[i])
            {
                while(!st.empty() && nums[st.top()]>=nums[i])
                {
                    st.pop();
                }
                if(st.empty())
                    leftprev[i]=-1;
                else
                    leftprev[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty())
            st.pop();
           for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                rightprev[i]=n;
            }
            else if(!st.empty() && nums[st.top()]<=nums[i])
            {
                rightprev[i]=st.top();
            }
            else if(!st.empty() && nums[st.top()]>nums[i])
            {
                while(!st.empty() && nums[st.top()]>nums[i])
                {
                    st.pop();
                }
                if(st.empty())
                    rightprev[i]=n;
                else
                    rightprev[i]=st.top();
            }
               st.push(i);
        }
          while(!st.empty())
            st.pop();
         for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                leftgrt[i]=-1;
            }
            else if(!st.empty() && nums[st.top()]>nums[i])
            {
                leftgrt[i]=st.top();
            }
            else if(!st.empty() && nums[st.top()]<=nums[i])
            {
                while(!st.empty() && nums[st.top()]<=nums[i])
                {
                    st.pop();
                }
                if(st.empty())
                    leftgrt[i]=-1;
                else
                    leftgrt[i]=st.top();
            }
             st.push(i);
        }
              while(!st.empty())
            st.pop();
         for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                rightgrt[i]=n;
            }
            else if(!st.empty() && nums[st.top()]>=nums[i])
            {
                rightgrt[i]=st.top();
            }
            else if(!st.empty() && nums[st.top()]<nums[i])
            {
                while(!st.empty() && nums[st.top()]<nums[i])
                {
                    st.pop();
                }
                if(st.empty())
                    rightgrt[i]=n;
                else
                    rightgrt[i]=st.top();
            }
               st.push(i);
        }
        for(int i=0;i<n;i++)
        {
            leftprev[i]=i-leftprev[i];
            leftgrt[i]=i-leftgrt[i];
            rightprev[i]=rightprev[i]-i;
            rightgrt[i]=rightgrt[i]-i;
        }

        long long  ans=0;
        for(int i=0;i<n;i++)
        {
           long long  leftans=leftprev[i]*rightprev[i];
            long long rightans=leftgrt[i]*rightgrt[i];
            ans+=(rightans-leftans)*nums[i];
            
        }
        return ans;
    }
};