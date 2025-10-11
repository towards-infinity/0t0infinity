// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s; cin >> s;
  int len = s.length();

  int n = (len+1)/2;
  char arr[n];

  int j = 0;
  for(int i=0 ; i<len ; i+=2) {
  	arr[j] = s[i];
  	j++;
  }
  sort(arr, arr+n);
  for(int i=0 ; i<n ; i++) {
  	cout << arr[i];
  	if(i<(n-1)) cout <<"+";
  }

  return 0;
}

// A 0339