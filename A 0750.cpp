// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k; cin >> n >> k;
  int time_remain = (4*60)-k;
  int time = 0;
  for(int i=1 ; i<=n ; i++) {
  	time += 5*i;
  	if(time>time_remain) {
  		cout << i-1 <<'\n';
  		return 0;
  	}
  }
  cout << n <<'\n';

  return 0;
}

// A 0750