// { Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string printSequence(string S)
{
    int n=S.size();
    string temp="";
    for(int i=0;i<n;i++)
    {
        if(S[i]=='A')
        {
            int x=2;
            temp+=to_string(x);
        }
        else if(S[i]=='B')
        {
            int x=22;
            temp+=to_string(x);
        }
        else if(S[i]=='C')
        {
            int x=222;
            temp+=to_string(x);
        }
        else if(S[i]=='D')
        {
            int x=3;
            temp+=to_string(x);
        }
        else if(S[i]=='E')
        {
            int x=33;
            temp+=to_string(x);
        }
        else if(S[i]=='F')
        {
            int x=333;
            temp+=to_string(x);
        }
        else if(S[i]=='G')
        {
            int x=4;
            temp+=to_string(x);
        }
        else if(S[i]=='H')
        {
            int x=44;
            temp+=to_string(x);
        }
        else if(S[i]=='I')
        {
            int x=444;
            temp+=to_string(x);
        }
        else if(S[i]=='J')
        {
            int x=5;
            temp+=to_string(x);
        }
        else if(S[i]=='K')
        {
            int x=55;
            temp+=to_string(x);
        }
        else if(S[i]=='L')
        {
            int x=555;
            temp+=to_string(x);
        }
        else if(S[i]=='M')
        {
            int x=6;
            temp+=to_string(x);
        }
        else if(S[i]=='N')
        {
            int x=66;
            temp+=to_string(x);
        }
        
        else if(S[i]=='O')
        {
            int x=666;
            temp+=to_string(x);
        }
        else if(S[i]=='P')
        {
            int x=7;
            temp+=to_string(x);
        }
        else if(S[i]=='Q')
        {
            int x=77;
            temp+=to_string(x);
        }
        else if(S[i]=='R')
        {
            int x=777;
            temp+=to_string(x);
        }
        else if(S[i]=='S')
        {
            int x=7777;
            temp+=to_string(x);
        }
        else if(S[i]=='T')
        {
            int x=8;
            temp+=to_string(x);
        }
        else if(S[i]=='U')
        {
            int x=88;
            temp+=to_string(x);
        }
        else if(S[i]=='V')
        {
            int x=888;
            temp+=to_string(x);
        }
        else if(S[i]=='W')
        {
            int x=9;
            temp+=to_string(x);
        }
        else if(S[i]=='X')
        {
            int x=99;
            temp+=to_string(x);
        }
        else if(S[i]=='Y')
        {
            int x=999;
            temp+=to_string(x);
        }
        else if(S[i]=='Z')
        {
            int x=9999;
            temp+=to_string(x);
        }
        else
        {
            temp+="0";
        }
        
    }
    return temp;
}