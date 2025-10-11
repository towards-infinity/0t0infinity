// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int arr[3];
  for(int i=0 ; i<3 ; i++) {
  	cin >> arr[i];
  }
  sort(arr, arr+3);
  cout << arr[2]-arr[0] <<'\n';

  return 0;
}

// A 0723