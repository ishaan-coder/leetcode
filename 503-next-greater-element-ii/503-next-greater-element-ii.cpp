class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        int i;
        stack<int>s;
            vector<int>temp(n,-1);
        for(i=2*n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=nums[i%n])
            {
             s.pop();   
            }
            if(i<n)
            {
                if(!s.empty())
                    temp[i]=s.top();
            }
            s.push(nums[i%n]);
        }
        return temp;
            
        
    }
};