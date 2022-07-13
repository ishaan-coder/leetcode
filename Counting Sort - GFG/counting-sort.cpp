// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        int n=arr.length(),i;
        int freq[256]={0};
        for(i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
        for(i=1;i<256;i++)
        {
            freq[i]=freq[i]+freq[i-1];
        }
        char output[n];
        for(i=n-1;i>=0;i--)
        {
            output[freq[arr[i]]-1]=arr[i];
            freq[arr[i]]--;
        }
        string temp="";
        for(i=0;i<n;i++)
        temp+=output[i];
        return temp;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}
  // } Driver Code Ends