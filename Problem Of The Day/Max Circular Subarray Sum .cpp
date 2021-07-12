int circularSubarraySum(int A[], int num){
        int max_sum = INT_MIN;
        int min_sum = INT_MAX;
        int array_SUM = 0;
        
        int curr_max_sum = 0;
        int curr_min_sum = 0;
        
        for(int i=0;i<num;++i)
        {
            array_SUM +=A[i];
    
            curr_max_sum += A[i];
            if(curr_max_sum > max_sum){
                max_sum = curr_max_sum;
            }
            if(curr_max_sum < 0){
                curr_max_sum = 0;
            }
        
            curr_min_sum += A[i];
            if(curr_min_sum < min_sum){
                min_sum = curr_min_sum;
            }
            if(curr_min_sum > 0){
                curr_min_sum = 0;
            }
        }
        if(array_SUM == min_sum)
            return max_sum;

        return max(max_sum,(array_SUM - min_sum));
    }
