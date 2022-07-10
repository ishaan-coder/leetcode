// { Driver Code Starts
// C++ program to search an element in an array
// where difference between all elements is 1
#include<bits/stdc++.h>
using namespace std;

// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k);


// Driver program to test above function
int main()
{
	int t,n,k,x;
	cin>>t;
	while(t--)
    {

        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>x;
        cout<<search(arr, n, x, k)<<endl;

    }
return 0;
}

// } Driver Code Ends


// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k)
{
    int i=0;
    if(arr[0]==x && arr[i]-arr[i+1]<=k)
    return 0;
    for(i=1;i<n-1;i++)
    {
        if(arr[i]==x && (arr[i-1]-arr[i]<=k||arr[i]-arr[i+1]<=k))
        return i;
    }
    if(arr[n-1]==x && arr[n-1]-arr[n-2]<=k)
    return n-1;
    return -1;
}    	