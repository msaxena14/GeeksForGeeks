#include<bits/stdc++.h>

using namespace std;

int dp[1001][1001];

int solve(vector<int> arr, int i, int j, int k){
	if(i >= j)
		return 0;

	if((arr[j] - arr[i]) <= k)
		return 0;
	
	if(dp[i][j] != -1)
		return dp[i][j];

	else if((arr[j] - arr[i]) > k)
		dp[i][j] = 1 + min(solve(arr, i+1, j, k), solve(arr, i, j-1, k));
	
	return dp[i][j];
}

int calc(vector<int> arr, int n,int k){
	memset(dp,-1,sizeof(dp));
	sort(arr.begin(), arr.end());
	if(n == 1)
		return 0;
	else
		return solve(arr, 0, n-1, k);
}
int main(){
	int n;
	cin>>n;
	
	vector<int> arr;
	for(int i=0; i<n; ++i){
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	int k;
	cin>>k;
	if(n == 1){
		cout<<0<<'\n';
		return 0;
	}
	else{
		cout<<calc(arr,n,k);
	}
	return 0;
}
