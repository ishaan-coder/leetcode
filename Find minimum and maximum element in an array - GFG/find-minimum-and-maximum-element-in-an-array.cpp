// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long,long long>temp;
    int i=0;
    long long max1=INT_MIN;
    long long min1=INT_MAX;
    for(i=0;i<n;i++)
    {
        max1=max(max1,a[i]);
        min1=min(min1,a[i]);
    }
    temp.first=min1;
    temp.second=max1;
    return temp;
}