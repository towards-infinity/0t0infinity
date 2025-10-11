// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, h; cin >> n >> h;
  int arr[n+1];
  for(int i=1 ; i<=n ; i++) {
  	cin >> arr[i];
  }

  int sum = 0;
  for(int i=1 ; i<=n ; i++) {
  	if(arr[i]>h) {
  		sum += 2;
  	} else {
  		sum += 1;
  	}
  }
  cout << sum <<'\n';

  return 0;
}

// A 0677