class Solution {
public:
    int trap(vector<int>&arr) {
        int n=arr.size();
        int i;
        int low=0;
        int high=n-1;
        int leftmax=0;
        int rightmax=0;
        int sum=0;
        while(low<=high)
        {
            if(arr[low]<arr[high])
            {
                if(arr[low]>leftmax)
                {
                    leftmax=arr[low];
                }
                else
                {
                    sum+=leftmax-arr[low];
                       
                }
                 low++;
            }
            else
            {
                if(arr[high]>rightmax)
                {
                    rightmax=arr[high];
                }
                else
                {
                    sum+=rightmax-arr[high];
                    
                }
                high--;
            }
        }
        return sum;
    }
};