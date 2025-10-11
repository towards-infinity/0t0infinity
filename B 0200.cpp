// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int arr[n];
  for(int i=0 ; i<n ; i++) {
  	cin >> arr[i];
  }
  int sum = 0;
  for(int i=0 ; i<n ; i++) {
  	sum += arr[i];
  }
  double ans = (double)sum/n;
  cout << setprecision(10) << ans <<'\n';

  return 0;
}

// B 0200