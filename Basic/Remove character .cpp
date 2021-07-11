// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        int len1 = string1.size();
        int len2 = string2.size();
        string result;
        
        int hash[257];
        for(int i=0; i<257; i++){
            hash[i] = 0;
        }
        
        for(int i=0; i<len2; i++){
            hash[string2[i]]++;
        }
        
        for(int i=0; i<len1; i++){
            if(hash[string1[i]] == 0){
                result = result + string1[i];
            }
        }
        return result;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}
  // } Driver Code Ends
