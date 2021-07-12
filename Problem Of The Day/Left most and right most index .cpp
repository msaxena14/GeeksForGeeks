pair<long,long> indexes(vector<long long> v, long long x){
        pair<long,long> ans;
        long first, last;
        first = lower_bound(v.begin(), v.end(), x) - v.begin();
        last = upper_bound(v.begin(), v.end(), x) - v.begin()-1;
        long n = v.size();
        if(first >= n or v[first] != x)
            return {-1,-1};
        return {first,last};
    }
