#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:

    bool check(int no){
        int hash[10] = {0};
        while(no != 0){
            if(hash[no % 10] == 0){
                hash[no % 10] = 1;
            }
            else{
                return false;
            }
            no /= 10;
        }
        return true;
    }
    
    vector<int> uniqueNumbers(int L,int R)
    {
        // Write Your Code here
        vector<int> ans;
        for(int i=L; i<=R; ++i){
            if(check(i) == true)
                ans.push_back(i);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends
