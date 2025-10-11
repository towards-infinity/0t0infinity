// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  if(n==1) {
  	cout << 1 <<'\n';
  	return 0;
  }
  
  int arr[n+1];
  for(int i=1 ; i<=n ; i++) {
  	cin >> arr[i];
  }
  int count = 0;
  for(int i=1 ; i<n ; i++) {
  	if(arr[i] != arr[i+1]) {
      count++;
    }
  }
  cout << count+1 <<'\n';

  return 0;
}

// A 0344