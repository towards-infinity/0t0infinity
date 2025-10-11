// Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  int count = 0;
  count += n/100;
  n %= 100;
  count += n/20;
  n%= 20;
  count += n/10;
  n %= 10;
  count += n/5;
  n %= 5;
  count += n;

  cout << count <<'\n';

  return 0;
}

// A 0996