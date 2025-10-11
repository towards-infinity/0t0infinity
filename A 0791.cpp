// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int l, b; cin >> l >> b;
  int count = 1;
  if(l==b) cout << 1 <<'\n';
  else {
  	for(int i=1 ; ; i++) {
  		l *= 3;
  	    b *= 2;
  	    if(l<=b) {
  	    	count++;
  	    } else {
  	    	cout << count <<'\n';
  	    	return 0;
  	    }
  	}
  }

  return 0;
}

// A 0791