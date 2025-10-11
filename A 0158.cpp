// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k; cin >> n >> k;
  int arr[n];
  for(int i=0 ; i<n ; i++) {
  	cin >> arr[i];
  }

  int finish = arr[k-1];  // * here idx 0 is 1 for k so 1st pos is k-1
  sort(arr, arr+n);
  int count = 0;
  for(int i=(n-1) ; i>=0 ; i--) {
  	if((arr[i]>0) and (arr[i] >= finish)) count++;
  }
  cout << count <<'\n';

  return 0;
}

// A 0158