// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s; cin >> s;
  int len = s.length();
  int count = 0;
  for(int i=0 ; i<len ; i++) {
  	if(islower(s[i])) {
  		count++;
  	}
  }
  if(count>=(len-count)) {
  	transform(s.begin(), s.end(), s.begin(), ::tolower);
  } else {
  	transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  cout << s <<'\n';

  return 0;
}

// A 0059