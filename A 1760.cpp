// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
  	int a, b, c; cin >> a >> b >> c;
  	int arr[3];
  	arr[0] = a; arr[1] = b; arr[2] = c;
  	sort(arr, arr+3);
  	cout << arr[1] <<'\n';
   }

  return 0;
}

// A 1760