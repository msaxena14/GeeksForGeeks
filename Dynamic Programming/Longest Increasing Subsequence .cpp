int longestSubsequence(int n, int a[]){
        vector<int> ans;
        ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(ans.back()<a[i]){
               ans.push_back(a[i]);
            }
            else{
               auto it=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
               ans[it]=a[i];
            }
        }
        return ans.size();
    }
