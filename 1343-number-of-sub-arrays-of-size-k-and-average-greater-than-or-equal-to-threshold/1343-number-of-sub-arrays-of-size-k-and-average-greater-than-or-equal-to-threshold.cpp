class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int count=0;
        int i=0;
        int curr_sum=0;
        int curr_avg=0;
        for(i=0;i<k;i++)
        {
            curr_sum+=arr[i];
        }
        curr_avg=curr_sum/k;
        if(curr_avg>=threshold)
            count++;
        for(i=k;i<n;i++)
        {
            curr_sum=curr_sum-arr[i-k]+arr[i];
            curr_avg=curr_sum/k;
            if(curr_avg>=threshold)
                count++;
        }
            return count;
    }
};