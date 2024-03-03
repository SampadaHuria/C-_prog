/*#include<iostream>
#include<vector>
using namespace std;

class Solution{
void solve(int i, int j, vector<vector<int>>& a, int n, vector<string>& ans, string move,
           vector<vector<int>>& vis, int di[], int dj[]) {
    if (i == n - 1 && j == n - 1) {
        ans.push_back(move);
        return;
    }
    string dir = "DLRU"; 
    for (int ind = 0; ind < 4; ind++) {
        int nexti = i + di[ind];
        int nextj = j + dj[ind];
        if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && a[nexti][nextj] == 1) {
            vis[nexti][nextj] = 1;  
            solve(nexti, nextj, a, n, ans, move + dir[ind], vis, di, dj);
            vis[nexti][nextj] = 0;  
        }
    }
}
    public:
    vector<string>findPath(vector<vector<int>>& m,int n){
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        int di[]={-1,0,0,+1};
        int dj[]={0,-1,+1,0};
        if(m[0][0]==1)
        solve(0,0,m,n,ans,"", vis,di,dj);
      return ans;
    }
};

int main() {
    Solution solution;

    // Example usage
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int n = matrix.size();

    vector<string> result = solution.findPath(matrix, n);

    if (result.empty()) {
        cout << "No path found." << endl;
    } else {
        cout << "Path(s) found:" << endl;
        for (const string& path : result) {
            cout << path << " ";
        }
        cout << endl;
    }

    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  void findPathHelper(int i, int j, vector < vector < int >> & a, int n, vector < string > & ans, string move,
    vector < vector < int >> & vis) {
    if (i == n - 1 && j == n - 1) {
      ans.push_back(move);
      return;
    }

    // downward
    if (i + 1 < n && !vis[i + 1][j] && a[i + 1][j] == 1) {
      vis[i][j] = 1;
      findPathHelper(i + 1, j, a, n, ans, move + 'D', vis);
      vis[i][j] = 0;
    }

    // left
    if (j - 1 >= 0 && !vis[i][j - 1] && a[i][j - 1] == 1) {
      vis[i][j] = 1;
      findPathHelper(i, j - 1, a, n, ans, move + 'L', vis);
      vis[i][j] = 0;
    }

    // right 
    if (j + 1 < n && !vis[i][j + 1] && a[i][j + 1] == 1) {
      vis[i][j] = 1;
      findPathHelper(i, j + 1, a, n, ans, move + 'R', vis);
      vis[i][j] = 0;
    }

    // upward
    if (i - 1 >= 0 && !vis[i - 1][j] && a[i - 1][j] == 1) {
      vis[i][j] = 1;
      findPathHelper(i - 1, j, a, n, ans, move + 'U', vis);
      vis[i][j] = 0;
    }

  }
  public:
    vector < string > findPath(vector < vector < int >> & m, int n) {
      vector < string > ans;
      vector < vector < int >> vis(n, vector < int > (n, 0));

      if (m[0][0] == 1) findPathHelper(0, 0, m, n, ans, "", vis);
      return ans;
    }
};

int main() {
  int n = 4;

   vector < vector < int >> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};

  Solution obj;
  vector < string > result = obj.findPath(m, n);
  if (result.size() == 0)
    cout << -1;
  else
    for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
  cout << endl;

  return 0;
}