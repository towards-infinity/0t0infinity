// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k; cin >> n >> k;
    if (k > (n * (n - 1)) / 2) {
        cout << "Impossible\n";
        return;
    }
    vector<long long> arr(n, 1);
    long long extra = (n * (n - 1)) / 2 - k;
    for (int i = n-1; i >= 0 && extra > 0; i--) {
        if (extra > arr[i]) {
            extra -= arr[i];
            arr[i-1] += arr[i];
            arr[i] = 0;
        } else {
            arr[i-1] += extra;
            arr[i] -= extra;
            extra = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            cout << "(";
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] != 0) {
            cout << ")";
        }
        for (int j = 0; j < arr[i] - 1; j++) {
            cout << "()";
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
