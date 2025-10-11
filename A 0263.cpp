// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int arr[6][6];
  for(int i=1 ; i<=5 ; i++) {
  	for(int j=1 ; j<=5 ; j++) {
  		cin >> arr[i][j];
  	}
  }

  int one_r, one_c;
  for(int r=1 ; r<=5 ; r++) {
  	for(int c=1 ; c<=5 ; c++) {
  		if(arr[r][c] == 1) {
  			one_r = r;
  			one_c = c;
  			break;
  		}
  	}
  }

  cout << abs(3 - one_r) + abs(3 - one_c) <<'\n';

  return 0;
}

// A 0263