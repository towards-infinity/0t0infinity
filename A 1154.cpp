// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int arr[5]; 
  arr[0] = 0;
  for(int i=1 ; i<=4 ; i++) {
    cin >> arr[i];
  }

  sort(arr, arr+5);
  int a = arr[4] - arr[1];
  int b = arr[2] - a;
  int c = arr[3] - a;

  cout << a <<" "<< b <<" "<< c <<'\n';

  return 0;
}

// A 1154