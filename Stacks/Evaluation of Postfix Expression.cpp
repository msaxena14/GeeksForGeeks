// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string str)
    {
        stack<int> st;
        for(int i=0; i<str.length(); ++i){
            if(str[i] >= '0' and str[i] <= '9'){
                st.push(str[i] - '0');
            }
            else{
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                switch(str[i]){
                    case '+': 
                        st.push(op1 + op2);
                        break;
                    case '-':
                        st.push(op2 - op1);
                        break;
                    case '*':
                        st.push(op1 * op2);
                        break;
                    case '/':
                        st.push(op2 / op1);
                        break;
                    case '^':
                        st.push(pow(op1,op2));
                        break;
                }
            }
        }
        return st.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
