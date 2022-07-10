// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    int sum1=0;
	    int sum2=0;
	    int max1=0;
	    int max2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            max1=max(max2,arr[i]+max1);
	            sum1=max(sum1,max1);
	        }
	        else
	        {
	            max2=max(max1,arr[i]+max2);
	            sum2=max(max2,sum2);
	        }
	    }
	    return max(sum1,sum2);
	    
}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends