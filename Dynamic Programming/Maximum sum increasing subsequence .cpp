int maxSumIS(int arr[], int n){
	    vector<int> dp(n,0);
	    dp[0] = arr[0];
	    int res = dp[0];
	    for(int i = 1; i < n; i++){
	        dp[i] = arr[i];                                     //put all the elementws of given array into dp vector
	        for(int j = 0; j < i; j++){
	            if(arr[j] < arr[i]){                            // check if 1st element is smaller than 2nd element, if true,
	                dp[i] = max(dp[i], arr[i] + dp[j]);         // add the value of current element of array to the value of element at dp vector and now find max b/w new value of dp vector and 
	            }                                               //value stored at previous element in dp vector!
	        }
	    }
	    res = *max_element(dp.begin(), dp.end());               // maximum value in vector will be th e answer 
	    return res;
	}
