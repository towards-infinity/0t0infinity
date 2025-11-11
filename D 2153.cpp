// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

const long long LINF = 1e18+5;
const int MAXN = 500005;

int a[MAXN];
long long dp[MAXN];

long long cost(int x, int y) {
    return abs(x - y);
}

long long cost(int x, int y, int z) {
    if (x > y) swap(x, y);
    if (y > z) swap(y, z);
    if (x > y) swap(x, y);
    return z - x;
}

void solve() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long ans = LINF;
    for (int cyc = 0; cyc < 4; cyc++) {
        dp[0] = 0;
        dp[1] = LINF;
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 2] + cost(a[i - 1], a[i]);
            if (i >= 3) dp[i] = min(dp[i], dp[i - 3] + cost(a[i - 2], a[i - 1], a[i]));
        }
        ans = min(ans, dp[n]);
        for (int i = 2; i <= n; i++) swap(a[i], a[i - 1]);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
