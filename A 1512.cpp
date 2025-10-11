// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int arr[n+1];
    for(int i=1 ; i<=n ; i++) {
      cin >> arr[i];
    }
    for(int i=1 ; i<=n ; i++) {
      if(i+2 <= n) {
        if(arr[i] != arr[i+1]) {
          if(arr[i+1] == arr[i+2]) {
            cout << i <<'\n';
            break;
          } else {
            cout << i+1 <<'\n';
            break;
          }
        }
      } else {
        cout << i+1 <<'\n';
        break;
      }
    }
  }

  return 0;
}

// A 1512