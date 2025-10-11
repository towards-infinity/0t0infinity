// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int x; cin >> x; 
  if(x<=5) {
  	cout << 1 <<'\n';
  	return 0;
  }
  if(x%5==0) {
    cout << floor(x/5) <<'\n';
  }
  else {
  	cout << floor(x/5) + 1 <<'\n';
  }

  return 0;
}

// A 0617