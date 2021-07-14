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
	}
