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
        int count[256]={0};
        int n=arr.size();
        int i;
        for(i=0;i<n;i++)
        {
            count[arr[i]]++;
        }
        for(i=1;i<256;i++)
        {
            count[i]=count[i]+count[i-1];
        }
        string temp="";
        char output[n];
        for(i=0;arr[i];i++)
        {
            output[count[arr[i]]-1]=arr[i];
            count[arr[i]]--;
        }
        for(i=0;arr[i];i++)
        {
            temp+=output[i];
        }
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