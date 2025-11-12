// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (n % 2 == 0) {
      cout << -1 << '\n';
      continue;
    }
    for (int i = n; i > 0; i--) {
      cout << i << ' ';
    }
    cout << '\n';
  }
  
  return 0;
}

// C 2029