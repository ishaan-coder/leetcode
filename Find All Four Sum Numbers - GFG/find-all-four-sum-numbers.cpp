// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int i=0,j=0,l=0;
        int n=arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(i=0;i<n-3;i++)
        {
             if(i == 0 || arr[i-1] != arr[i])
            for(j=i+1;j<n-2;j++)
            {
                 if(j == i+1 || arr[j-1] != arr[j])
                 {
                l=j+1;
                int x=n-1;
                int sum=arr[i]+arr[j];
                while(l<x)
                {
                    vector<int>temp;
                    if(arr[l]+arr[x]+arr[i]+arr[j]==k)
                    {
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[l]);
                        temp.push_back(arr[x]);
                        ans.push_back(temp);
                        l++;
                        x--;
                        while(arr[l-1] == arr[l] and l<x)l++;
                        while(arr[x+1] == arr[x] and l < x)x--; 
                    }
                    else if(arr[l]+arr[x]+arr[i]+arr[j]>k)
                    {
                        x--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends