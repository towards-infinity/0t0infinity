// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
  	int n; cin >> n;
  	if((n+1)%3==0 or (n-1)%3==0) {
  		cout << "First" <<'\n';
  	} else {
  		cout << "Second" <<'\n';
  	}
  }

  return 0;
}

// A 1899