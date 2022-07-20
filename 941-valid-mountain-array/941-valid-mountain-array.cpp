class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=0;
        int n=arr.size();
        int flag=1;
        if(n==2||n==1)
        return false;
        if(arr[0]>arr[1])
            return false;
        for(i=0;i<n-1;i++)
        {
            if(flag==1)
            {
           if(arr[i]<arr[i+1])
               continue;
           if(arr[i]==arr[i+1])
               return false;
            if(arr[i]>arr[i+1])
                flag=0;
            }
            if(flag==0)
            {
                if(arr[i]>arr[i+1])
                    continue;
                else
                    return false;
            }
        }
        if(flag==1)
            return false;
        else
            return true;
       
    }
};