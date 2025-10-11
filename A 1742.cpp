// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
  	int a, b, c; cin >> a >> b >> c;
  	if(a+b==c) {
  		cout << "YES" <<'\n';
  	} else if(b+c==a) {
  		cout << "YES" <<'\n';
  	} else if (c+a==b) {
  		cout << "YES" <<'\n';
  	} else {
  		cout << "NO" <<'\n';
  	}
  }

  return 0;
}

// A 1742