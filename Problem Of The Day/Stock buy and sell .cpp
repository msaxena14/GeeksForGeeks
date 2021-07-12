   vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int> >ans;
        for(int i=1; i<n; ++i){
            if(A[i-1] < A[i])
                ans.push_back({i-1,i});
        }
        return ans;
    }
