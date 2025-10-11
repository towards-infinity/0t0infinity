// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
  	int n; cin >> n;
  	int arr[n];
  	for(int i=0 ; i<n ; i++) {
  		cin >> arr[i];
  	}

  	int ans = 0;
  	int count = 0;
  	for(int i=0 ; i<n ; i++) {
  		if(arr[i]==0) {
  			count++;
  		} else {
  			ans = max(ans, count);
  			count = 0;
  		}
  	}
  	cout << max(ans, count) <<'\n';
  }

  return 0;
}

// B 1829