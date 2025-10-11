// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int arr[n+1][2+1];
  for(int i=1 ; i<=n ; i++) {
  	for(int j=1 ; j<=2 ; j++) {
  		cin >> arr[i][j];
  	}
  }
  int count = 0;
  for(int i=1 ; i<=n ; i++) {
  	if((arr[i][2] - arr[i][1]) >= 2) {
  		count++;
  	}
  }
  cout << count <<'\n'; 

  return 0;
}

// A 0467