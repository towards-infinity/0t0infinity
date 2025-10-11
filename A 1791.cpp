// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s = "codeforces";
  int len = s.length();
  int t; cin >> t;
  while(t--) {
  	char ch; cin >> ch;
  	bool rs = false;
  	for(int i=0 ; i<len ; i++) {
  		if(s[i] == ch) {
  			rs = true;
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

// A 1791