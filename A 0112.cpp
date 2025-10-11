// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s1, s2; cin >> s1 >> s2;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

  if(s1<s2) cout << -1 <<'\n';
  else if(s1>s2) cout << 1 <<'\n';
  else cout << 0 <<'\n';

  return 0;
}

// A 0112