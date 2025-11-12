// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }
    int mx = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int now = 0, ci, cj;
        ci = i, cj = j;
        while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
          now += a[ci--][cj--];
        }
        ci = i, cj = j;
        while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
          now += a[ci++][cj--];
        }
        ci = i, cj = j;
        while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
          now += a[ci--][cj++];
        }
        ci = i, cj = j;
        while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
          now += a[ci++][cj++];
        }
        now -= a[i][j] * 3;
        mx = max(mx, now);
      }
    }
    cout << mx << '\n';
  }

  return 0;
}

// D 1676