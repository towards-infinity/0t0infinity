// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<vector<int>> a(n);
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        --u; --v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    long long ans = 0;
    vector<int> sz(n, 1);
    auto dfs = [&](auto &dfs, int v, int p) -> void {
        for (int u : a[v]) {
            if (u != p) {
                dfs(dfs, u, v);
                sz[v] += sz[u];
            }
        }
    };
    dfs(dfs, 0, -1);
    for (int i = 0; i < n; i++) {
        if (n - sz[i] >= k) {
            ans += sz[i];
        }
        if (sz[i] >= k) {
            ans += n - sz[i];
        }
    }
    cout << ans + n << '\n';
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
