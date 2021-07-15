 const int p = 1000000007;
    #define lli long long int
    
    int countBits(int N, long long int arr[]){
        lli res = 0;
        for(int i = 0; i < 32; i++){
            lli counton = 0;
            for(int j = 0; j < N; j++){
                if(arr[j] & (1 << i))
                    counton++;
            }
            lli countoff = (N - counton);
            res += (2 * (counton * countoff)) % p;
        }
        return res % p;
    }
