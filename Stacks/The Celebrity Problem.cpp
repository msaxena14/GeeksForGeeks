//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {
        stack<int> st;
        for(int i=0; i<n; ++i)
            st.push(i);
        while(st.size() > 1){
            auto p1 = st.top(); st.pop();
            auto p2 = st.top(); st.pop();
            if(m[p1][p2])
                st.push(p2);
            else
                st.push(p1);
        }
        int may_be_ans = st.top();
        for(int i=0; i<n; ++i){
            if(i != may_be_ans){
                if(!m[i][may_be_ans] or m[may_be_ans][i])
                    return -1;
            }
        }
        return may_be_ans;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
