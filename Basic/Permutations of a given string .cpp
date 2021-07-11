
 // } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string str)
		{
		    vector<string> ans;
		    sort(str.begin(),str.end());
		    do{
		        string temp;
		        temp += str;
		        ans.push_back(temp);
		    }while(next_permutation(str.begin(),str.end()));
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends
