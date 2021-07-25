int maximumPath(int N, vector<vector<int>> matrix){
        for(int i=1; i<N; ++i){
            for(int j=0; j<N; ++j){
                if(j > 0 and j < N-1){                            //when we are somewhere other than boundaries of matrix
                    matrix[i][j] += max(matrix[i-1][j], 
                                        max(matrix[i-1][j-1], 
                                        matrix[i-1][j+1]));
                }
                else if(j == N-1){                                                //if we are at last coloumn its not at all possible to go right side of the matrix, therefore
                    matrix[i][j] += max(matrix[i-1][j], matrix[i-1][j-1]);        // we wont include matrix[i][j+1]
                }
                else if(j == 0){                                                  //if we are at first coloumn of the matrix we wont be able to move left side therefore we aret
                    matrix[i][j] += max(matrix[i-1][j], matrix[i-1][j+1]);        // including materix[i][j-1]
                }
            }
        }
        int ans = 0;
        for(int i=0; i<N; ++i){
            ans = max(matrix[N-1][i], ans);                                       // maximum path will be present in the last coloumn of the matrix therefore we will calculate 
        }                                                                         // maximum amongst them.
        return ans;
    }
