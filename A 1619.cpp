// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
  	string s; cin >> s;
  	int len = s.length();
  	bool rs = true;
  	if(len%2 != 0) {
  		rs = false;
  	}
  	for(int i=0 ; i<(len/2) ; i++) { // check i in just first half 
  		if(s[i] != s[(len/2)+i]) {
  			rs = false;
  		}
  	}
  	if(rs) {
  		cout << "YES" <<'\n';
  	} else {
  		cout << "NO" <<'\n';
  	}
  }

  return 0;
}

// A 1619