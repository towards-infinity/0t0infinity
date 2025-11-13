// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long k; cin >> k;
    long long cur = 9, len = 1;
    while (k - cur * len > 0) {
        k -= cur * len;
        cur *= 10;
        len++;
    }
    string s = to_string(cur / 9 + (k - 1) / len);
    long long ans = 0;

    for (int i = 0; i < (k - 1) % len + 1; i++)
        ans += s[i] - '0';

    long long pr_s = 0;
    for (int i = 0; i < (int)s.length(); i++) {
        int curd = s[i] - '0';
        if (curd)
            ans += curd * (len - 1) * cur / 2 + curd * (2 * pr_s + curd - 1) / 2 * cur / 9;
        cur /= 10;
        len--;
        pr_s += curd;
    }
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
