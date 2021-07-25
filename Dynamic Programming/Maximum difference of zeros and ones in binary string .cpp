int maxSubstring(string str){
	    int sum = 0;
	    int max_sum = INT_MIN;
	    
	    for(int i=0 ; i<str.length(); ++i){
	        int temp = (str[i] == '0') ? 1 : -1;
	        sum += temp;
	        max_sum = max(sum,max_sum);
	        if(sum < 0)
	            sum = 0;
	    }
	    return max_sum;
	}

//without modifying the given input string
