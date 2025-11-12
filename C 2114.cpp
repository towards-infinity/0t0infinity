// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int last = -1, ans = 0;
    for (int i = 0; i < n; ++i) {
      int a; cin >> a;
      if (a - last > 1) {
        ans++;
        last = a;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}

// C 2114