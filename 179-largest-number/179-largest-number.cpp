class Solution {
public:
    static bool comp(string a,string b)
    {
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>arr(n);
        for(int i=0;i<n;i++)
        {
            arr[i]=to_string(nums[i]);
        }
        sort(arr.begin(),arr.end(),comp);
        string x="";
        for(int i=0;i<n;i++)
            x+=arr[i];
        if(x[0]=='0')
            return "0";
        return x;
    }
};