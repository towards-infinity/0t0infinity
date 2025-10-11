// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
  	int n, k; cin >> n >> k;
  	int arr[n];
  	for(int i=0 ; i<n ; i++) {
  		cin >> arr[i];
  	}
  	bool rs = false;
  	for(int i=0 ; i<n ; i++) {
  		if(arr[i]==k) {
  			rs = true;
  		}
  	}
  	if(rs==true) {
  		cout << "YES" <<'\n';
  	} else {
  		cout << "NO" <<'\n';
  	}
  }

  return 0;
}

// A 1878