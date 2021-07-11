using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int s = pow(n,2);
	    vector<int> matrix(s);
	    for(int i=0; i<s; i++){
	        cin>>matrix[i];
	    }
	    sort(matrix.begin(), matrix.end());
	    for(int i=0; i<s; i++){
	        cout<<matrix[i]<<" ";
	    }
	cout<<endl;
	}
	return 0;
}
