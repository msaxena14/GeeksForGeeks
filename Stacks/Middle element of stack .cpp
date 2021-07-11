#include<bits/stdc++.h>

using namespace std;

int findmid(stack<int> &st, int k){
  if(k == 0)
    return st.top();
  int ele = st.top();
  st.pop();
  --k;
  findmid(st,k);
}

int main(){
  stack<int> st;
  st.push(11);
  st.push(22);
  st.push(33);
  st.push(44);
  st.push(55);
  st.push(66);
  st.push(77);
  int mid = (st.size() + 1)/2;
  cout<<findmid(st,mid);
  return 0;
}
