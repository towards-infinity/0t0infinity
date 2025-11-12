// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    vector<int> x(k);
    for (int i = 0; i < k; i++) {
      cin >> x[i];
    }
    sort(x.rbegin(), x.rend());
    int cnt = 0;
    long long sum = 0;
    while (cnt < k && sum + n - x[cnt] < n) {
      sum += n - x[cnt];
      cnt++;
    }
    cout << cnt << '\n';
  }

  return 0;
}

// C 1593