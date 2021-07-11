#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        long long int max_area = 0;
        long long int area = 0;
        int i = 0;
        vector<int> v;
        for(int i=0; i<n; ++i){
            v.push_back(arr[i]);
        }
        v.push_back(0);
        stack<long long> st;
        while(i<n+1){
            if(st.empty() or v[i] >= v[st.top()]){
                st.push(i);
                ++i;
            }
            else{
                long long int height = st.top();
                st.pop();
                area = (v[height] * (st.empty() ? (i) : (i - st.top() - 1)));
                if(max_area < area)
                    max_area = area;
            }
        }
        return max_area;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
