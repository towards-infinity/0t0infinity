// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  string s; cin >> s;
  int ant = 0;
  for(int i=0 ; i<n ; i++) {
  	if(s[i]=='A') {
  		ant++;
  	}
  }
  int dan = n-ant;
  if(ant>dan) cout <<"Anton"<<'\n';
  if(ant<dan) cout <<"Danik"<<'\n';
  if(ant==dan) cout <<"Friendship"<<'\n';

  return 0;
}

// A 0734