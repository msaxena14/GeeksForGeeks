// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        if(x.size()&1)
            return false;
        for(int i=0; i<x.length(); ++i){
            if(x[i] == '(' or x[i] == '[' or x[i] == '{'){
                st.push(x[i]);
            }
            if(x[i] == ')'){
                if(!st.empty() and st.top() == '(')
                    st.pop();
                else
                    return false;
            }
            if(x[i] == '}'){
                if(!st.empty() and st.top() == '{')
                    st.pop();
                else
                    return false;
            }
            if(x[i] == ']'){
                if(!st.empty() and st.top() == '[')
                    st.pop();
                else
                    return false;
            }
        }
        if(st.size())
            return false;
        return true;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
