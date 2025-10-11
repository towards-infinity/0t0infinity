// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int k, r; cin >> k >> r;
  if(k<r and k%r==0) {
  	cout << k/r <<'\n';
  	return 0;
  }
  for(int i=1 ; i<=1000 ; i++) {
  	if((i*k)%10==r or (i*k)%10==0) {
  		cout << i <<'\n';
  		return 0;
  	}
  }

  return 0;
}

// A 0732