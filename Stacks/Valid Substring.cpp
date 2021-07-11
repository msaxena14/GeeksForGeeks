// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        stack<char> ele;
        stack<int> ind;
        ind.push(-1);
        int mx = 0;
        for(int i=0; i<s.length(); ++i){
            if(s[i] == '('){
                ele.push(s[i]);
                ind.push(i);
            }
            else{
                if(!ele.empty() and ele.top() == '('){
                    ele.pop();
                    ind.pop();
                    mx = max(mx, i - ind.top());
                }
                else{
                    ind.push(i);
                }
            }
        }
        return mx;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
