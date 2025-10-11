// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n; 
  long long sum = 0;
  int count = 0;
  long long total = 0;
  for(int i=1 ; i<=n ; i++) {
  	sum += i;
  	total += sum;
  	if(total > n) break;
  	count++;
  }
  cout << count <<'\n'; 

  return 0;
}