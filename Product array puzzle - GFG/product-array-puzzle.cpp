// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       long long int i,product;
       if(n==1)
       {
           vector<long long int>x;
           x.push_back(1);
       return x;
       }
       vector<long long int>output(n,0);
       output[0]=nums[0];
       for(i=1;i<n;i++)
       {
           output[i]=output[i-1]*nums[i];
       }
      product=nums[n-1];
      output[n-1]=output[n-2];
      for(i=n-2;i>0;i--)
      {
          output[i]=output[i-1]*product;
          product=product*nums[i];
      }
      output[0]=product;
      return output;
      }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends