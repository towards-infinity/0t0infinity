// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    int odd = 0, even = 0;
    long long ans = 1LL * (c + 1) * (c + 2) / 2;
    for (int i = 0; i < n; i++) {
        ans -= s[i] / 2 + 1;
        ans -= c - s[i] + 1;
        if (s[i] % 2 == 0) even++;
        else odd++;
    }
    ans += 1LL * even * (even + 1) / 2;
    ans += 1LL * odd * (odd + 1) / 2;
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
    	solve();
    }

    return 0;
}
