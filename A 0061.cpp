// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s1, s2; cin >> s1 >> s2;
  int len = s1.length();
  for(int i=0 ; i<len ; i++) {
  	if(s1[i] != s2[i]) {
  		cout << 1;
  	} else {
  		cout << 0;
  	}
  }

  return 0;
}

// A 0061