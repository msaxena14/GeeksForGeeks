#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int Maximize(int arr[],int n)
    {
        sort(arr, arr+n);
        long long int res = 0, mod = 1e9+7;
        for(long long int i=0; i<n; ++i){
            res = (res + (arr[i] * i) % mod) % mod;
        }
        return (int)res;
    }
};

// { Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}  // } Driver Code Ends
