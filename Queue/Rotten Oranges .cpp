// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        queue <pair<pair<int, int>, int>> q;
    	int dx[4] = {0, 0, -1, 1};
    	int dy[4] = { -1, 1, 0, 0};
    	int vis[r][c];
    	for (int i = 0; i < r; i++){
    		for (int j = 0; j < c; j++){
    			vis[i][j] = 0;
    		}
    	}
    	for (int i = 0; i < r; i++){
    		for (int j = 0; j < c; j++){
    			if (grid[i][j] == 2){
    				q.push({{i, j}, 0});
    				vis[i][j] = 1;
    			}
    		}
    	}
    	int timeUnivers = -1;
	    while (!q.empty()){
		    auto f = q.front();
    		int x = f.first.first;
    		int y = f.first.second;
    		int time = f.second;
    		for (int i = 0; i < 4; i++){
    			int xi = x + dx[i] , yi = y + dy[i];
    			if ((xi >= 0 && xi < r) && (yi >= 0 && yi < c) && vis[xi][yi] == 0){
    				if (grid[xi][yi] == 1){
    					grid[xi][yi] = 2;
    					vis[xi][yi] = 1;
    					q.push({{xi, yi}, time + 1});
    					timeUnivers = time + 1;
    				}
    				else{
    					vis[xi][yi] = 1;
    				}
    			}
    		}
    		q.pop();
        }
        for(int i=0; i<r; ++i){
            for(int j=0; j<c; ++j){
                if(grid[i][j] == 1)
                    return -1;
            }
        }
        return timeUnivers;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
