// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
  	string a, b; cin >> a >> b;
  	swap(a[0], b[0]);
  	cout << a <<" "<< b <<'\n';
  }

  return 0;
}

// A 1985