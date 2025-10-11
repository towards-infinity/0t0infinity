// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
    int k; cin >> k;
    int ans = 0;
    int j = 0;
    for(int i=1 ; i<=1e6 ; i++) {
      if(!((i%10==3) or (i%3==0))) {
        ans = i;
        j++;
        if(j==k) {
          cout << ans <<'\n';
          break;
        }
      }
    }
  }

  return 0;
}

// A 1560