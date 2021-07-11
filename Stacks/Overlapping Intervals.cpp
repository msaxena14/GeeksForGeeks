vector<vector<int>> Interval(vector<vector<int>> &inter){
  vector<vector<int>> ans;
  if(inter.size() == 0)
     return ans;
  
  sort(inter.begin(), inter.end());
  
  int l = inter[0][0];
  int r = inter[0][1];
  
  for(int i=1; i<inter.size(); ++i){
    if(inter[i][0] <= r)
       r = max(r, inter[i][1]);
    else{
      ans.push_back({l,r});
      l = inter[i][0];
      r = inter[i][1];
    }
  }
  ans.push_back({l,r});
  return ans;
}
