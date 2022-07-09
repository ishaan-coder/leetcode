// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	int n=A.length();
    	int m=B.length();
    	int i=0,j=0;
    	int count[256]={0};
    	for(i=0;i<n;i++)
    	{
    	    count[A[i]]++;
    	}
    	for(j=0;j<m;j++)
    	{
    	    count[B[j]]--;
    	}
    	for(i=0;i<256;i++)
    	{
    	    if(count[i]>0)
    	    return -1;
    	}
    	i=0,j=0;
    	int res=0;
    	for(i=n-1,j=m-1;i>=0;)
    	{
    	    while(i>=0 && A[i]!=B[j])
    	    {
    	        i--;
    	        res++;
    	    }
    	    if(A[i]==B[j] && i>=0)
    	    {
    	        i--;
    	        j--;
    	    }
    	}
    	return res;
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends