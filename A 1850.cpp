// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
  	int a, b, c; cin >> a >> b >> c;
  	if(a+b >= 10) {
  		cout << "YES" <<'\n';
  	} else if(b+c >= 10) {
  		cout << "YES" <<'\n';
  	} else if(a+c >= 10) {
  		cout << "YES" <<'\n';
  	} else {
  		cout << "NO" <<'\n';
  	}
  }

  return 0;
}

// A 1850