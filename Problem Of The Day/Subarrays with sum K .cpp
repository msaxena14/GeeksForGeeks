class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k){
        unordered_map<int,int> ump;
        int ans = 0;
        int currsum = 0;
        
        for(int i=0; i<N; ++i){
            currsum += Arr[i];
            if(currsum == k)
                ++ans;
            if(ump.find(currsum - k) != ump.end())
                ans += ump[currsum - k];
            ump[currsum]++;
        }
        return ans;
    }
};
