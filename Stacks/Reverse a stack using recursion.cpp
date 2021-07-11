void insertatBottom(stack<int> &st, int ele){
  if(st.size() == 0){
    st.push(ele);
    return;
  }
  
  int temp = st.top();
  st.pop();
  insertatBottom(st,ele);
  st.push(temp);
}

void reverse(stack<int> &st){
  if(st.empty())
     return;
  int ele = st.top();
  st.pop();
  reverse(st);
  insertatBottom(st,ele);
}
