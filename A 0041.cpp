// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s, t; cin >> s >> t;
  int len = s.length();
  if(len != t.length()) {
    cout << "NO" <<'\n';
    return 0;
  }
  for(int i=0 ; i<len ; i++) {
  	if(s[i] != t[len-1-i]) {
  		cout << "NO" <<'\n';
  		return 0;
  	}
  }
  cout << "YES" <<'\n';

  return 0;
}

// A 0041