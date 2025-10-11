// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k; cin >> n >> k;
  for(int i=1 ; i<=k ; i++) {
  	if(n%10==0) {
  		n /= 10;
  	} else {
  		n -= 1;
  	}
  }
  cout << n <<'\n';

  return 0;
}

// A 0977