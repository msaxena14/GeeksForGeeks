	int search(int A[], int N){
	    unordered_map<int,int> ump;
	    for(int i=0; i<N; ++i){
	        ump[A[i]]++;
	    }
	    for(auto ele : ump){
	        if(ele.second == 1){
	            return ele.first;
	        }
	    }
		return -1;
	}

Execution Time : 0.7 sec

int search(int A[], int N){
	    int res=0;
	    for(int i = 0; i < N ; i++){
	        res = res ^ A[i];
        }
	return res;
}

Execution Time : 0.4 sec
