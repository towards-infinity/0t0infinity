// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    long long n, q; cin >> n >> q;

    vector<long long> a(n + 1), pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      pref[i] = pref[i - 1] + a[i];
    }

    while (q--) {
      long long l, r, k; cin >> l >> r >> k;
      long long rs = pref[n] - (pref[r] - pref[l - 1]) + k * (r - l + 1);
      cout << (rs % 2 ? "YES\n" : "NO\n");
    }
  }

  return 0;
}

// D 1807