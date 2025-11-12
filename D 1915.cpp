// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        string res = "";
        while (!s.empty()) {
            int x = (s.back() == 'a' || s.back() == 'e') ? 2 : 3;
            while (x--) {
                res += s.back();
                s.pop_back();
            }
            res += '.';
        }

        res.pop_back();
        reverse(res.begin(), res.end());
        cout << res << '\n';
    }

    return 0;
}

// D 1915