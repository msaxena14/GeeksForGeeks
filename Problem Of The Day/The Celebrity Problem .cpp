int celebrity(vector<vector<int> >& m, int n) {
        stack<int> st;
        for(int i=0; i<n; ++i)
            st.push(i);
        while(st.size() > 1){
            auto p1 = st.top(); st.pop();
            auto p2 = st.top(); st.pop();
            if(m[p1][p2])
                st.push(p2);
            else
                st.push(p1);
        }
        int may_be_ans = st.top();
        for(int i=0; i<n; ++i){
            if(i != may_be_ans){
                if(!m[i][may_be_ans] or m[may_be_ans][i])
                    return -1;
            }
        }
        return may_be_ans;
    }
