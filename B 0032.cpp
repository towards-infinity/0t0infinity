// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s; cin >> s;
  int len = s.length();
  for(int i=0 ; i<len ; ) {
  	if(s[i] == '-') {
  		if(s[i+1] == '-' and (i+1)<len) {
  			cout << 2;
  			i += 2;
  		} else {
  			cout << 1;
  			i += 2;
  		}
  	} else {
  		cout << 0;
  		i += 1;
  	}
  }

  return 0;
}

// B 0032